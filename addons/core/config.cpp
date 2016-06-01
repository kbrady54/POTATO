#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ACE_COMMON"};
        author = "Potato";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/POTATO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "ACE_Settings.hpp"

class CfgMods {
    class PREFIX {
        dir = "@POTATO";
        name = "POTATO";
        picture = QUOTE(PATHTOF(potato_icon_ca.paa));
        hidePicture = "false";
        hideName = "false";
        actionName = "Website";
        action = "https://github.com/BourbonWarfare/POTATO";
        description = "";
    };
};
