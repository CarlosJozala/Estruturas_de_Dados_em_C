//Agenda em C
//by: Guilherme Mendes, Carlos Jozala, Gledson Rocha, Rafael Koguchi & João Gustavo
//Prof: Joaquim Junior 

#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char email[50];
    char endereco[100];
    char telefone[15];
    char data_nascimento[11];
};

void preencher_agenda(struct Contato *agenda, int num_contatos) {
    for (int i = 0; i < num_contatos; i++) {
        printf("Contato %d:\n", i+1);
        printf("Nome: ");
        fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);
        printf("E-mail: ");
        fgets(agenda[i].email, sizeof(agenda[i].email), stdin);
        printf("Endereco: ");
        fgets(agenda[i].endereco, sizeof(agenda[i].endereco), stdin);
        printf("Telefone: ");
        fgets(agenda[i].telefone, sizeof(agenda[i].telefone), stdin);
        printf("Data de Nascimento (formato dd/mm/aaaa): ");
        fgets(agenda[i].data_nascimento, sizeof(agenda[i].data_nascimento), stdin);
    }
}

void buscar_nome(struct Contato *agenda, int num_contatos) {
    char nome_busca[50];
    printf("Digite o nome a ser buscado: ");
    fgets(nome_busca, sizeof(nome_busca), stdin);
    printf("Contatos encontrados:\n");
    for (int i = 0; i < num_contatos; i++) {
        if (strstr(agenda[i].nome, nome_busca)) {
            printf("Nome: %s", agenda[i].nome);
            printf("E-mail: %s", agenda[i].email);
            printf("Endereco: %s", agenda[i].endereco);
            printf("Telefone: %s", agenda[i].telefone);
            printf("Data de Nascimento: %s", agenda[i].data_nascimento);
        }
    }
}

void buscar_telefone(struct Contato *agenda, int num_contatos) {
    char telefone_busca[15];
    printf("Digite o telefone a ser buscado: ");
    fgets(telefone_busca, sizeof(telefone_busca), stdin);
    printf("Contatos encontrados:\n");
    for (int i = 0; i < num_contatos; i++) {
        if (strstr(agenda[i].telefone, telefone_busca)) {
            printf("Nome: %s", agenda[i].nome);
            printf("E-mail: %s", agenda[i].email);
            printf("Endereco: %s", agenda[i].endereco);
            printf("Telefone: %s", agenda[i].telefone);
            printf("Data de Nascimento: %s", agenda[i].data_nascimento);
        }
    }
}

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int num_contatos;
    int opcao;

    printf("Quantos contatos deseja adicionar (maximo %d)? ", MAX_CONTATOS);
    scanf("%d", &num_contatos);
    getchar();  // consume newline character

    preencher_agenda(agenda, num_contatos);

    do {
        printf("\nOpcoes:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar por nome\n");
        printf("3 - Buscar por telefone\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();  // consume newline character
        
switch (opcao) {
case 1:
	int opcao, num_novos_contatos;
	char nome_pesquisado[50];
	char telefone_pesquisado[15];
	

printf("\nQuantos contatos deseja adicionar? ");
scanf("%d", &	num_novos_contatos);
getchar(); // consume newline character
preencher_agenda(agenda + num_contatos, num_novos_contatos);
num_contatos += num_novos_contatos;
printf("\nContatos adicionados com sucesso!\n");
break;
case 2:
printf("\nDigite o nome a ser pesquisado: ");
fgets(nome_pesquisado, sizeof(nome_pesquisado), stdin);
printf("\nResultados:\n");
for (int i = 0; i < num_contatos; i++) {
if (strstr(agenda[i].nome, nome_pesquisado)) {
printf("\nContato %d:\n", i+1);
printf("Nome: %s", agenda[i].nome);
printf("E-mail: %s", agenda[i].email);
printf("Endereco: %s", agenda[i].endereco);
printf("Telefone: %s", agenda[i].telefone);
printf("Data de Nascimento: %s", agenda[i].data_nascimento);
}
}
break;
case 3:
printf("\nDigite o telefone a ser pesquisado: ");
fgets(telefone_pesquisado, sizeof(telefone_pesquisado), stdin);
printf("\nResultados:\n");
for (int i = 0; i < num_contatos; i++) {
if (strstr(agenda[i].telefone, telefone_pesquisado)) {
printf("\nContato %d:\n", i+1);
printf("Nome: %s", agenda[i].nome);
printf("E-mail: %s", agenda[i].email);
printf("Endereco: %s", agenda[i].endereco);
printf("Telefone: %s", agenda[i].telefone);
printf("Data de Nascimento: %s", agenda[i].data_nascimento);
}
}
break;
case 0:
printf("\nEncerrando...\n");
break;
default:
printf("\nOpcao invalida. Tente novamente.\n");
}
} while (opcao != 0);
return 0;
}
