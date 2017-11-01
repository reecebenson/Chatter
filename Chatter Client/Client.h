#pragma once
#pragma comment (lib, "Ws2_32.lib")
// > Includes
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <string>
#include <thread>
using namespace std;

// > Definitions
#define DEFAULT_BUFLEN 512            
#define IP_ADDRESS "127.0.0.1"
#define DEFAULT_PORT "3504"

// > Variables
struct client_type
{
	SOCKET socket;
	int id;
	char received_message[DEFAULT_BUFLEN];
};

// > Class
class Client
{
	private:
	public:
		static int process_client(client_type &new_client);
};

