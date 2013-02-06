/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "server.h"


void
server_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	int  sum_1_arg;
	void  *result_2;
	struct message  print_message_1_arg;
	struct response  *result_3;
	struct request  concat_1_arg;
	void  *result_4;
	char *increment_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SERVER, SERVER_V1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = sum_1(&sum_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = print_message_1(&print_message_1_arg, clnt);
	if (result_2 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = concat_1(&concat_1_arg, clnt);
	if (result_3 == (struct response *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = increment_1((void*)&increment_1_arg, clnt);
	if (result_4 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	server_1 (host);
exit (0);
}
