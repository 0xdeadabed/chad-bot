/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 4/11/22.
 */

#ifndef CHAT_BOT_DB_HPP

#include <iostream>
#include <vector>

std::string	select_response(std::string input);

typedef	struct {
	std::string 	input;
	std::string 	response[3];
}	record;

// A struct in array
static record messages[] = {
	{"COMMENTTUT'APPELES?", // input
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

	{"COMMENTVAS-TU?",
{
		"Ca va bien !",
		"Ca va bien et toi ?",
		"Je vais bien, et toi ?"
		}
	},

	{"QUIESTU?",
		{
			"Je suis un chat-bot.",
			"Je pense que tu sais bien qui je suis",
			"Pourquoi tu veux savoir ?"
		}
	},

	{"ESTUINTELLIGENT?",
		{
			"Oui, biensur.",
			"Qu'est ce que t'en penses ?",
			"En fait, je suis tres intelligent."
		}
	},

	{"ESTUREEL?",
		{
			"Est ce que c'est vraiment important ?",
			"Tu veux dire quoi par ca ?",
			"Je suis aussi reel que je peux l'etre."
		}
	}
};

#define CHAT_BOT_DB_HPP

#endif //CHAT_BOT_DB_HPP
