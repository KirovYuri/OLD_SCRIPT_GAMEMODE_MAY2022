/*
*
*	-= PGD DEFINI??O DO USU?RIO =-
*	Protioso Gerenciamento de Dados
*	Autor: Protioso ([VGS]Protioso_OC)
*   Obs.: Os valores deste arquivo podem ser editados!
*
*/

//      Defini??es para formato FILE ------------------------------------------|
#define MAX_CHAVE_CHAR 64
/*
* Isto define o tamanho m?ximo de uma chave.
------------------------------------------------------------------------------*/
#define MAX_VALOR_CHAR 256
/*
* Isto define o tamanho m?ximo de um valor
* que ser? contido em uma chave.
------------------------------------------------------------------------------*/
#define MAX_PGD_LINHA_CHAR 512
/*
* Isto define o tamanho m?ximo de leitura e
* escrita de uma linha em um arquivo.
* Obs.: Usado na fun??o pgd_EscreverArquivo.
------------------------------------------------------------------------------*/
//      Defini??es para formato SQLite ----------------------------------------|
#define MAX_PGD_SQLITE_GERAL 256
/*
* Isto define o tamanho m?ximo do formato de
* fun??es gerais de SQLite do PGD, como query's por exemplo.
------------------------------------------------------------------------------*/
#define MAX_PGD_SQLITE_QUERY_LIVRE 512
/*
* Isto define o tamanho m?ximo do formato da
* query da fun??o pgd_SQLInserirLivre.
------------------------------------------------------------------------------*/
