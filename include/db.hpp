/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#ifndef CHAT_BOT_DB_HPP

#include <iostream>
#include <vector>

typedef	std::vector<std::string>	vector_string;
std::string	select_response(std::string input);

typedef	struct {
	std::string 	input;
	std::string 	response[3];
}	record;

// A struct in array
record msgs[] = {
	{"Comment tu t'appeles ?", // input
		{ // responses
			"Je m'appelle chat-bot.", // [0]
			"Je suis chat-bot.", // [1]
			"Pourquoi ?" // [2]
		}
	},

	{"Hello",
		{
			"Hello !",
			"Hey, comment ca va ?",
			"Hey !"
		}
	},

	{"Hey",
		{
			"Hello !",
			"Hey, comment ca va ?",
			"Hey !"
		}
	},

	{"Comment vas-tu ?",
{
		"Ca va bien !",
		"Ca va bien et toi ?",
		"Je vais bien, et toi ?"
		}
	},

	{"Qui es tu ?",
		{
			"Je suis un chat-bot.",
			"Je pense que tu sais bien qui je suis",
			"Pourquoi tu veux savoir ?"
		}
	},

	{"Es tu intelligent ?",
		{
			"Oui, biensur.",
			"Qu'est ce que t'en penses ?",
			"En fait, je suis tres intelligent."
		}
	},

	{"Es tu reel ?",
		{
			"Est ce que c'est vraiment important ?",
			"Tu veux dire quoi par ca ?",
			"Je suis aussi reel que je peux l'etre."
		}
	}
};

size_t	n_size = sizeof(msgs)/sizeof(msgs[0]);

#define CHAT_BOT_DB_HPP

#endif //CHAT_BOT_DB_HPP
