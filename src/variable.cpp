#include"../include/variable.h"
#include <vector>

Variable::Variable(){
//Constructeur vide
}
Variable::Variable( ITimeDiscretization *it_n):iter_n(it_n){
    y_n.resize(iter_n->get_nb_points());

}


double & Variable ::operator() (double const & t_n){
    y_n[iter_n->iteration(t_n)];

}


//std::ostream const& operator(double t_n)(std::ostream &os, const Variable& y_n);//La commande const Variable &y_n permet d’envoyer le Variable y_n par référence (plutôt que par copie), le mot clé const nous garanti qu’il ne sera pas modifié par la fonction appelante. 