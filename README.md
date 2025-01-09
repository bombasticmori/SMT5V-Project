Shin Megami Tensei 5: Vengeance Modding Project
------------------------------------------
[Gamebanana Homepage](https://gamebanana.com/tools/18864)
### Description:
This is an SDK for Shin Megami Tensei 5: Vengeance, allowing modders to potentially modify more advanced game content.  It's similar in concept to [P3R-Project](https://github.com/rirurin/P3R-Project/).

C++ headers were dumped using [RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS), then serializable files were generated from the game files with [UEAssetToolkitGenerator](https://github.com/LongerWarrior/UEAssetToolkitGenerator) and ported into Unreal Engine with [UEAssetToolkit](https://github.com/Buckminsterfullerene02/UEAssetToolkit-Fixes).

The project now also contains an editor plugin (ProjectActions) that allows the creation of several custom assets used by the game. Currently, these are:
- MaterialParameterApplier
- CharaExpressionTable
- CharaMotionOverrideTable
- MMIAsset

This will be added to over time. A custom editor widget for MMIAsset files is planned. If you would like to help with that, please let me know.

This project only contains asset files for non-graphical assets due to file size limitations. You'll need to import the models, materials, sounds and textures you need on your own.

The majority of C++ classes and Blueprints are only dummies. If you have experience with reversing and want to contribute, feel free to help out.  You can see the current list of what files have been
reversed by checking [Progress.md](https://github.com/bombasticmori/SMT5V-Project/blob/master/PROGRESS.md?plain=1).

No content from the non-open source plugins should be reversed unless absolutely necessary. The non-open source plugins distributed here are dummies that only contain parameters and functions names from those plugins, but no actual code.
This is so the files will map to the ones distributed with the game engine on runtime.

### Requirements:
Unreal Engine 4.27.2

For Materials and Textures:
[UEAssetToolkit](https://github.com/Buckminsterfullerene02/UEAssetToolkit-Fixes)

If you want to bulk generate FBX Model data, you will also need:

- [Blender 3.6](https://www.blender.org/download/releases/3-6/)</li>
- [Blender3D Import psk psa addon](https://github.com/matyalatte/blender3d_import_psk_psa)</li>
- [UEAssetToolkitGenerator](https://github.com/LongerWarrior/UEAssetToolkitGenerator)</li>
- Follow the UEAssetToolkitGenerator [wiki guide](https://github.com/LongerWarrior/UEAssetToolkitGenerator/wiki/Generating-FBX) for Generating FBX
- See the [GameBanana page](https://gamebanana.com/tools/18864) for this project for a fixed copy of the psk_psa_batch_export.py script used in this step.

If you want to help reverse engineer blueprints, you will need:
[KismetKompiler](https://github.com/tge-was-taken/KismetKompiler/)

Recommended:
- [UnrealAutoMod](https://github.com/Mythical-Github/unreal_auto_mod) OR [UnrealAutoModInEditor](https://github.com/Mythical-Github/UnrealAutoModInEditor)
- If using Visual Studio as your IDE, the [Visual Studio Integration Plugin](https://www.fab.com/listings/8a639215-7f85-4cc7-b155-fa2137326209)

### Installation:
1) Clone the repository
2) Right click the SMT5V.uproject file and click "Generate Visual Studio project files"
3) Open the project in Unreal Engine 4.27.2.  It will ask you to compile. Let it (it might take a while)
4) (Recommended) Cook your files on loading into the Editor the first time. If you find it can't cook despite having no changes made, please raise an issue.  You can try enabling Iterative Cooking for your own work, via Project Settings -> Cooker -> Iterative cooking for the File-> Cook Content menu item setting, but your results may vary.

### Troubleshooting
Most issues regarding compilation can be fixed by doing a complete whipe of your compiled files. To do so, delete your 'Binaries' and 'Intermediate' folder in your project root directory, as well as the SMT5V.sln file, then right click the uproject file and select 'Generate Visual Studio project files' again.
If you have issues with any plugins compiling, try deleting it's Binaries and Intermediate folders in its Plugin directory (SMT5V/Plugins/ProjectActions)

If you're having issues with getting files to cook, first check your Output Log.  You can open it from the 'Cooking Failed' popup or by going to Window -> Developer Tools -> Output Log.
First, identify whether the cooking errors are coming from files you edited or if they're from unedited files.  Some files can also fail to cook due to missing dependencies, so keep that in mind.
If it is a default file, please raise an issue and I'll look into it, or if you figure out the issue yourself, please submit a pull request.

### Credits
Included Plugins (under MIT license):
- [KawaiiPhysics](https://github.com/pafuhana1213/KawaiiPhysics)
- [ACL](https://github.com/nfrechette/acl)

Tools Used:
- [RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)
- [UEAssetToolkitGenerator](https://github.com/LongerWarrior/UEAssetToolkitGenerator)
- [UEAssetToolkit](https://github.com/Buckminsterfullerene02/UEAssetToolkit-Fixes)
- [KismetKompiler](https://github.com/tge-was-taken/KismetKompiler/)