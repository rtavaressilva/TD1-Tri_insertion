//
// Created by Rafael Silva on 06/05/23.
//

#ifndef TD1_TRI_INSERTION_TRI_INSERTION_HPP
#define TD1_TRI_INSERTION_TRI_INSERTION_HPP
#include <vector>

/**
* @brief Effectue le tri par insertion
* @param v Vecteur contenant des entiers
*/
template <typename T>
void tri_insertion(const std::vector<T>& v) {
    for (size_t i = 1; i < v.size(); ++i) {
        // inserer adéquatement l'element i dans la main gauche
        size_t j = i;
        while ((j > 0) && (v[j] > v[j - 1])) {
            std::swap(v[j], v[j - 1]);
            j--;
        }
    }
}

#endif //TD1_TRI_INSERTION_TRI_INSERTION_HPP
