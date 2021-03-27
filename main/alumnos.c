#include <stdlib.h>
#include <stdio.h> /*Libreria para escribir y leer, printf(); - scanf();*/
#include <stdbool.h> /*Libreria booleano, bool*/

/* Incluimos la librería "alumnos.h" */
#include "alumnos.h"

/* Función para añadir un alumno */
int afegir_alumne (nif, alumne, data) {
  
  printf("Nom de l'alumne: ");
  scanf("%c ",&alumne.nom);
  printf("Cognom: ");
  scanf("%c ",&alumne.cognom);
  printf("NIF (numeros + lletra): ");
  printf("Numeros: ");
  scanf("%d ",&nif_t.numeros);
  printf("Lletra: ");
  scanf("%c ",&nif_t.lletra);
  printf("Correu elèctronic: ");
  scanf("%c ",&alumne.email);
  printf("Nota (per exemple, 6.8): ");
  scanf("%f ",&alumne.nota);
  printf("Data de naixement: (dia, mes i any): ");
  printf("Dia:");
  scanf("%d ",&fecha_t.dia);
  printf("Mes:");
  scanf("%d ",&fecha_t.mes);
  printf("Any:");
  scanf("%d ",&fecha_t.any);
  printf("Sexe (home [0], dona [1] o no vull dir-ho [2]): ");
  scanf("%d ",&alumne.sexe);

}

/* MAIN: TEST list functions */
int main() {
	node_t *list;
	data_t data;

	/* Initialize list to empty */
	list_init(&list);



	


	printf("\nList size: %d\n", list_size(list)); /* List size: 0 */
	printf("List: ");  list_to_string(list); printf("\n"); /* List: ( ) */

	/* Insert at front */
	list_add_first(&list, 0);
	list_add_first(&list, 1);

	printf("\nList size: %d\n", list_size(list)); /* List size: 2 */
	printf("List: ");  list_to_string(list); printf("\n"); /* List: ( 1 0 ) */

	/* Insert at back */
	list_add_last(&list, 2);
	list_add_last(&list, 3);
	list_add_last(&list, 4);

	printf("\nList size: %d\n", list_size(list)); /* List size: 5 */
	printf("List: ");  list_to_string(list); printf("\n"); /* List: ( 1 0 2 3 4 ) */

	/* Remove from front */
	data = list_remove_first(&list);
	data = list_remove_first(&list);
	data = list_remove_first(&list);

	printf("\nList size: %d\n", list_size(list)); /* List size: 2 */
	printf("List: ");  list_to_string(list); printf("\n"); /* List: ( 3 4 ) */
	printf("Last element removed: %d\n", data); /* Last element removed: 2 */

	/* Remove from back */
	data = list_remove_last(&list);
	data = list_remove_last(&list);

	printf("\nList size: %d\n", list_size(list)); /* List size: 0 */
	printf("List: ");  list_to_string(list); printf("\n"); /* List: ( ) */
	printf("Last element removed: %d\n", data); /* Last element removed: 3 */
}