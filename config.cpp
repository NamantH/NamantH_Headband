class CfgPatches
{
	class NamantH_Headband
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class NamantH_Headband
	{
		dir = "NamantH_Headband";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NamantH_Headband";
		credits = "NamantH";
		author = "NamantH";
		authorID = "0";
		version = "1.0";
		extra = 1;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NamantH_Headband/scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class NamantH_Headband_Base : Clothing {
		scope = 0;
		displayName = "Long Headband";
		descriptionShort = "A headband made for war!";
		model = "NamantH_Headband\models\headband_g.p3d";
		inventorySlot[] = {"Headgear"};
		weight = 120;
		rotationFlags = 1;
		itemSize[] = {2,2};
		ragQuantity = 1;
		varWetMax = 1;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		visibilityModifier = 0.9;
		headSelectionsToHide[] = 
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1.0,{"NamantH_Headband\data\headband.rvmat"}},{0.7,{"NamantH_Headband\data\headband.rvmat"}},{0.5,{"NamantH_Headband\data\headband_damage.rvmat"}},{0.3,{"NamantH_Headband\data\headband_damage.rvmat"}},{0.0,{"NamantH_Headband\data\headband_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "NamantH_Headband\models\headband_m.p3d";
			female = "NamantH_Headband\models\headband_f.p3d";
		};
		soundImpactType = "textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
		
	};
	class NamantH_Headband_Red : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Red Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co.paa"
		};
	};
	class NamantH_Headband_DeepRed : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Dark Red Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_DeepRed.paa"
		};
	};
	class NamantH_Headband_LightBlue : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Light Blue Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_LightBlue.paa"
		};
	};
	class NamantH_Headband_DarkBlue : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Dark Blue Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_DarkBlue.paa"
		};
	};
	class NamantH_Headband_LightGreen : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Light Green Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_LightGreen.paa"
		};
	};
	class NamantH_Headband_HunterGreen : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Hunter Green Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_HunterGreen.paa"
		};
	};
	class NamantH_Headband_Orange : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Orange Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Orange.paa"
		};
	};
	class NamantH_Headband_Yellow : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Yellow Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Yellow.paa"
		};
	};
	class NamantH_Headband_Black : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Black Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Black.paa"
		};
	};
	class NamantH_Headband_White : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long White Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_White.paa"
		};
	};
	class NamantH_Headband_Arctic : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Arctic Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Arctic.paa"
		};
	};
	class NamantH_Headband_Colorful : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Colorful Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Colorful.paa"
		};
	};
	class NamantH_Headband_DarkSplinter : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Dark Splinter Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_DarkSplinter.paa"
		};
	};
	class NamantH_Headband_Multicam : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Multicam Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Multicam.paa"
		};
	};
	class NamantH_Headband_RedTiger : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Red Tiger Stripe Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_RedTiger.paa"
		};
	};
	class NamantH_Headband_TigerStripe : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Tiger Stripe Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_TigerStripe.paa"
		};
	};
	class NamantH_Headband_Woodland : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Woodland Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Woodland.paa"
		};
	};
	class NamantH_Headband_BloodSplatter : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Blood Spattered Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_BloodSplatter.paa"
		};
	};
	class NamantH_Headband_BrownLeather : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Brown Leather Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_BrownLeather.paa"
		};
		hiddenSelectionsMaterials[] = {"NamantH_Headband\data\headband_BrownLeather.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1.0,{"NamantH_Headband\data\headband_BrownLeather.rvmat"}},{0.7,{"NamantH_Headband\data\headband_BrownLeather.rvmat"}},{0.5,{"NamantH_Headband\data\headband_damage_BrownLeather.rvmat"}},{0.3,{"NamantH_Headband\data\headband_damage_BrownLeather.rvmat"}},{0.0,{"NamantH_Headband\data\headband_destruct_BrownLeather.rvmat"}}};
				};
			};
		};
	};
	class NamantH_Headband_RedVelvet : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Red Velvet Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_RedVelvet.paa"
		};
		hiddenSelectionsMaterials[] = {"NamantH_Headband\data\headband_RedVelvet.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1.0,{"NamantH_Headband\data\headband_RedVelvet.rvmat"}},{0.7,{"NamantH_Headband\data\headband_RedVelvet.rvmat"}},{0.5,{"NamantH_Headband\data\headband_damage_RedVelvet.rvmat"}},{0.3,{"NamantH_Headband\data\headband_damage_RedVelvet.rvmat"}},{0.0,{"NamantH_Headband\data\headband_destruct_RedVelvet.rvmat"}}};
				};
			};
		};
	};
	class NamantH_Headband_Gator : NamantH_Headband_Base {
		scope = 2;
		displayName = "Long Gator Skin Headband";
		descriptionShort = "A headband made for war!";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"NamantH_Headband\data\Headband_co_Gator.paa"
		};
		hiddenSelectionsMaterials[] = {"NamantH_Headband\data\headband_Gator.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1.0,{"NamantH_Headband\data\headband_Gator.rvmat"}},{0.7,{"NamantH_Headband\data\headband_Gator.rvmat"}},{0.5,{"NamantH_Headband\data\headband_damage_Gator.rvmat"}},{0.3,{"NamantH_Headband\data\headband_damage_Gator.rvmat"}},{0.0,{"NamantH_Headband\data\headband_destruct_Gator.rvmat"}}};
				};
			};
		};
	};
};