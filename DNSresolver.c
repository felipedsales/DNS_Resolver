// DNS RESOLVER - Resolve Endereços WEB em Endereço IP

#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
	
if(argc <= 1){
		printf("Modo de Uso: ./DNSresolver + URL do Site\n");
		printf("Exemplo ./DNSresolver google.com\n");
		return 0;
	}else{
		struct hostent *alvo = gethostbyname(argv[1]); //Estrutura para Transformar o Host em IP
		if(alvo == NULL){
		printf("URL Inválida\n");
		}else{
		printf("O Endereço IP desse Site é: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr))); //Estrutura que traduz o IP e Exibe
	}
}
}
