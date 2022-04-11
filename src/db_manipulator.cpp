/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#include "db.hpp"

typedef	std::vector<std::string>	vector_string;

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

static void	parseInput(std::string &arg) {
	int len = arg.size();
	char b;

	for (int i = 0; i < len; i++){
		b = arg[i];
		b = toupper(b);
		arg[i] = b;
	}
	arg.erase(remove(arg.begin(),arg.end(),' '),arg.end());
}


std::string	select_response(std::string input) {
	parseInput(input);
	std::string ret;
	static std::string linput;
	if (input == linput)
		return (ret = "J'aime pas trop me repeter.");
	srand((unsigned) time(NULL));

	int	selection = rand() % 3;
	vector_string	res = find_match(input);
	if (res.size() == 0)
		ret = "Pardon, je suis pas sur d'avoir compris.";
	else
		ret = res[selection];
	linput = input;
	return(ret);
}
