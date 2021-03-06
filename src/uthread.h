#ifndef UTHREAD_H
#define UTHREAD_H
#include <stdio.h>
#include <stdlib.h>
#include <ucontext.h>
typedef int uthread_t;
typedef struct uthread_elem uthread_elem;
struct uthread_elem {
	uthread_t             id;
	ucontext_t*           uth_context;
	struct uthread_elem*  next;
};
typedef  uthread_elem* uthread_list;
//make_vcpu : créer un processeur virtuel
int make_vcpu(int);
/*create_uthread : créer un thread
qui lance une fonction avec arguments*/
uthread_t create_uthread(void (*) (void*) , void*);
//permet de spécifier le quantum en secondes
int set_quantum(int);
//commence tout les threads
int start_uthreads();
//quitte le thread courant (on met au début de la stack l'id du thread)
int exit_uthread();
#endif
