#include <stdio.h>

int main() {

    struct endereco_t
    {
        char cep[9];
        char logradouro[61];
        int numero;
        char bairro[31];
        char cidade[41];
        char uf[3];
    };

    struct endereco_t meu_endereco;

    printf("Entre com o CEP: ");
    fgets(meu_endereco.cep, sizeof(meu_endereco.cep), stdin);
    printf("Entre com o Logradouro: ");
    fgets(meu_endereco.logradouro, sizeof(meu_endereco.logradouro), stdin);
    printf("Entre com o Numero: ");
    scanf("%i", &meu_endereco.numero);
    printf("Entre com o Bairro: ");
    fgets(meu_endereco.bairro, sizeof(meu_endereco.bairro), stdin);
    printf("Entre com a Cidade: ");
    fgets(meu_endereco.cidade, sizeof(meu_endereco.cidade), stdin);
    printf("Entre com a UF: ");
    fgets(meu_endereco.uf, sizeof(meu_endereco.uf), stdin);

    printf("Meu endereco: \n");
    printf("%s, %i - %s\n", meu_endereco.logradouro, meu_endereco.numero, meu_endereco.bairro);
    printf("%s/%s\n", meu_endereco.cidade, meu_endereco.uf);
    printf("CEP %s\n", meu_endereco.cep);

    struct contato_t {
        char nome[41];
        long long int telefone;
        struct endereco_t endereco;
    }

    struct contato_t meu_contato;

    memset(&meu_contato, 0, sizeof(meu_contato)); // limpa o struct

    printf("Entre com o Nome: ");
    fgets(meu_contato.nome, sizeof(meu_contato.nome), stdin);
    printf("Entre com o Telefone: ");
    scanf("%li", &meu_contato.telefone);
    meu_contato.endereco = meu_endereco;

    struct contato_t contatos[10];
    return 0;
}