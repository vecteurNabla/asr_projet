#ifndef UTHREAD_H
#define UTHREAD_H
typedef uthread_t int;
//make_vcpu : créer un processeur virtuel
int make_vcpu(int vcpu_number);
/*create_uthread : créer un thread
qui lance une fonction avec arguments*/
uthread_t create_uthread(void*(void*),void*);
//permet de spécifier le quantum en secondes
int set_quantum(int);
//commence tout les threads
int start_uthreads();
//quitte le thread courant (on met au début de la stack l'id du thread)
int exit_uthread();
#endif
