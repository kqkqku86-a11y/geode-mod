#include <Geode/Bindings.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    void onMoreGames(CCObject*) {
        FLAlertLayer::create(
            "Mod Sukses", 
            "Mod ini berhasil dibuat lewat HP dan disatukan GitHub!", 
            "Mantap"
        )->show();
    }
};

