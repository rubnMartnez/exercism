#include "lasagna_master.h"

namespace lasagna_master {

    // TODO: add your solution here

    int preparationTime(const strVec& layers, int avgTime){
        return layers.size() * avgTime;
    }

    amount quantities(const strVec& layers){
        amount amountRes{};
        for (const auto& layer : layers){
            if (layer == "sauce")
                amountRes.sauce += 0.2;
            if (layer == "noodles")
                amountRes.noodles += 50;
        }
        return amountRes;
    }

    void addSecretIngredient(strVec& layers, const strVec& friendLayers){
        if (layers.empty() || friendLayers.empty()) return;
        layers.back() = friendLayers.back();
    }
    void addSecretIngredient(strVec& layers, const std::string& secretIngredient){
        if (layers.empty() || secretIngredient.empty()) return;
        layers.back() = secretIngredient;
    }

    doubleVec scaleRecipe(const doubleVec& quantities, int scaleFactor){
        if (quantities.empty()) return {};
        if (scaleFactor == 2) return quantities;
        doubleVec resVec{};
        resVec.reserve(quantities.size());
        for (double quantity : quantities){
            resVec.emplace_back(quantity / 2 * scaleFactor);
        }
        return resVec;
    }

}  // namespace lasagna_master

