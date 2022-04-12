/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#include "../include/db.hpp"

typedef	std::vector<std::string>	vector_string;
const std::string delimiters = "?!.;,";


static bool	isPunctuation(char c) {
	return delimiters.find(c) != std::string::npos;
}

static void	toUpper(std::string &arg) {
	int len = arg.size();
	char b;

	for (int i = 0; i < len; i++){
		b = arg[i];
		b = toupper(b);
		arg[i] = b;
	}
}

static void	cleanString(std::string &arg) {
	int	len = arg.length();
	std::string	tmp;
	char	p;

	for (int i = 0; i < len; i++) {
		if (arg[i] == ' ' && p == ' ')
			continue;
		else if (!isPunctuation(arg[i]))
			tmp += arg[i];
		p = arg[i];
	}
	arg = tmp;
}


static void	copy(std::string *src, vector_string &dst) {
	for (int i = 0; i < n_res; ++i) {
		if (src != NULL)
			dst.push_back(src[i]);
		else
			break;
	}
}

static vector_string	find_match(std::string arg) {
	vector_string	res;
	size_t	n_msg = sizeof(messages)/sizeof(messages[0]);

	for (size_t i = 0; i < n_msg; ++i) {
		std::string keyWord(messages[i].input);
		if (arg.find(keyWord) != std::string::npos) {
			copy(messages[i].response, res);
			return(res);
		}
	}
	return(res);
}

static void	parseInput(std::string &arg) {
	cleanString(arg);
	toUpper(arg);
}

std::string	select_response(std::string input) {
	parseInput(input);
	std::string ret;
	static std::string	linput;
	if (input == linput)
		return (ret = "J'aime pas trop me repeter.");
	srand((unsigned) time(NULL));

	vector_string	res = find_match(input);
	if (res.size() == 0) {
		ret = "Pardon, je suis pas sur d'avoir compris.";
	}
	else {
		int	selection = rand() % res.size();
		ret = res[selection];
	}
	linput = input;
	return(ret);
}
