class CfgPatches {
	class satans_bridge {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_server_config"};
	};
};
class CfgFunctions {
	class GADD {
		class main {
			file = "\satans_bridge\init";
			class init {
				postInit = 1;
			};
		};
	};
};

