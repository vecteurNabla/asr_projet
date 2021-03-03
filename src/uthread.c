#include "uthread.h"
//make_vcpu : créer un processeur virtuel
int make_vcpu(int n_vcpu){}
uthread_list inserer_uthread(uthread_list list,uthread_list element)
{
  element->next=list;
  return element;
}
void supprimer_uthread(uthread_list list, uthread_t id_t)
{
  uthread_list ant=list;
  if(list->id==id_t)
  {
    return NULL
  }
  list=list->next;
  while(list!=NULL)
  {
    if(list->id==id_t)
      {
          free(list->uth_context->uc_stack->ss_sp);
          ant->next=list->next;
      }
    ant=list;
    list=list->next;
  }
}
/*create_uthread : créer un thread
qui lance une fonction avec arguments*/
uthread_t create_uthread(void  (*function) (void*),void* args){}
//permet de spécifier le quantum en secondes
int set_quantum(int quantum){}
//commence tout les threads
int start_uthreads(){}
//quitte le thread courant (on met au début de la stack l'id du thread)
int exit_uthread(){}
