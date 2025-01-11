modded class PluginRecipesManagerBase {
	override void RegisterRecipies() {
		super.RegisterRecipies();
		RegisterRecipe(new CraftWhiteHeadband);
		RegisterRecipe(new CraftBloodstainedHeadband);
		RegisterRecipe(new CraftRedHeadband);
		RegisterRecipe(new CraftDeepRedHeadband);
	}
}