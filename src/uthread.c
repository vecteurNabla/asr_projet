#include "uthread.h"
//make_vcpu : créer un processeur virtuel
int make_vcpu(int n_vcpu){}
/*create_uthread : créer un thread
qui lance une fonction avec arguments*/
uthread_t create_uthread(void  (*function) (void*),void* args){}
//permet de spécifier le quantum en secondes
int set_quantum(int quantum){}
//commence tout les threads
int start_uthreads(){}
//quitte le thread courant (on met au début de la stack l'id du thread)
int exit_uthread(){}
