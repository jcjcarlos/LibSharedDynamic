#include"libaccount.h"

int main(){
    inicializeBank();
    //testCriarEListarContas();
    //testBuscarConta();/*
    int opc = 0;
    int result = 1;
    do{
        showMenu();
        scanf("%d", &opc);
    switch(opc){
        case 0:
            printf("Encerrando a aplicacao\n");
            return 0;
        case 1:
            result = createAccount(getIdFromUser());
            break;
        case 2:
            result = changeAccount(getIdFromUser(), getValueFromUser());
            break;
        case 3:
            result = changeAccount(getIdFromUser(), -getValueFromUser());
            break;
        case 4:
            result = listAccount(getIdFromUser());
            break;
    }
    
    if(result)
        printf("Operacao realizada com sucesso!\n");
    else
	printf("Nao foi possivel realizar a operacao\n");
        
    } while(opc);
}


