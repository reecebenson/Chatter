#pragma once
#pragma comment (lib, "Ws2_32.lib")
// > Includes
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string>
#include <thread>
#include <vector>

// > Definitions
#define IP_ADDRESS "127.0.0.1"
#define DEFAULT_PORT "3504"
#define DEFAULT_BUFLEN 512

// > Variables
struct client_type
{
	int id;
	SOCKET socket;
};

const char OPTION_VALUE = 1;
const int MAX_CLIENTS = 5;

// > Class
class Server
{
	private:
	public:
		static int process_client(client_type &new_client, std::vector<client_type> &client_array, std::thread &thread);
};

