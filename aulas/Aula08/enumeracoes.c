#include <stdio.h>
#include <stdbool.h>

it main() {

    enum dias_da_semana_e {

        domingo = 1,
        segunda,
        terca,
        quarta,
        quinta,
        sexta,
        sabado
    };

    enum meses_do_ano {

        Janeiro = 1,
        fevereiro,
        marco,
        abril,
        maio,
        junho,
        julho,
        agosto,
        setembro,
        outubro,
        novembro,
        dezembro
    };

    enum sexo_e{

        masculino,
        feminino

    };

    enum situacao_e{

        ativo,
        inativo
    };

    enum tipo_de_contato{
        particular,
        publico

    };

    struct contato_t{

        char nome[61];
        long int telefone;
        enum tipo_de_contato;
    };

    bool esta_presente;
    esta_presente - false;

    return 0;
}