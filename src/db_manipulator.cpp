/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#include "db.hpp"
//#include <vector>
//#include <iostream>

static void	copyi(std::string *src, vector_string &dst) {
	for (int i = 0; i < 3; ++i)
		dst.push_back(src[i]);
}

static vector_string	find_match(std::string arg) {
	vector_string	res;
	size_t	n_msg = sizeof(messages)/sizeof(messages[0]);

	for (size_t i = 0; i < n_msg; ++i) {
		if (std::string(messages[i].input) == arg) {
			copyi(messages[i].response, res);
			return(res);
		}
	}
	return(res);
}

std::string	select_response(std::string input) {
	std::string ret;
	srand((unsigned) time(NULL));

	int	selection = rand() % 3;
	vector_string	res = find_match(input);
	if (res.size() == 0)
		ret = "Pardon, je suis pas sur d'avoir compris.\n";
	else
		ret = res[selection];
	return(ret);
}
