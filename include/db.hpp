/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#ifndef CHAT_BOT_DB_HPP

#include <iostream>
#include <vector>

std::string	select_response(std::string input);

const int	n_res = 3;

typedef	struct {
	std::string 	input;
	std::string 	response[n_res];
}	record;

// A struct in array
static record messages[] = {
	{"COMMENT TU T'APPELES", // input
		{ // responses
			"Je m'appelle chat-bot.", // [0]
			"Je suis chat-bot.", // [1]
			"Pourquoi ?" // [2]
		}
	},

	{"HELLO",
		{
			"Hello !",
			"Hey, comment ca va ?",
			"Hey !"
		}
	},

	{"HEY",
		{
			"Hello !",
			"Hey, comment ca va ?",
			"Hey !"
		}
	},

	{"COMMENT VAS-TU",
{
		"Ca va bien !",
		"Ca va bien et toi ?",
		"Je vais bien, et toi ?"
		}
	},

	{"QUI ES TU",
		{
			"Je suis un chat-bot.",
			"Je pense que tu sais bien qui je suis",
			"Pourquoi tu veux savoir ?"
		}
	},

	{"ES TU INTELLIGENT",
		{
			"Oui, biensur.",
			"Qu'est ce que t'en penses ?",
			"Tu veux qu'on actualise ?"
		}
	},

	{"ES TU REEL",
		{
			"Est ce que c'est vraiment important ?",
			"Tu veux dire quoi par ca ?",
			"Je suis aussi reel que je peux l'etre."
		}
	}
};

#define CHAT_BOT_DB_HPP

#endif //CHAT_BOT_DB_HPP
