#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

    struct amount {
        int noodles;
        double sauce;
    };

    using strVec = std::vector<std::string>;
    using doubleVec = std::vector<double>;

    int preparationTime(const strVec& layers, int avgTime = 2);

    amount quantities(const strVec& layers);

    void addSecretIngredient(strVec& layers, const strVec& friendLayers);
    void addSecretIngredient(strVec& layers, const std::string& secretIngredient);

    doubleVec scaleRecipe(const doubleVec& quantities, int scaleFactor);

}  // namespace lasagna_master

