import os
import shutil

# Define the root project directory
root_dir = "."

# Define the folders to delete in the root directory
root_folders_to_delete = ["Binaries", "Intermediate"]

# Define the solution file to delete
solution_file = "SMT5V.sln"

# Define the plugin folder
plugins_dir = os.path.join(root_dir, "Plugins")

# Special case for the nested CriWare plugin structure
criware_nested_path = os.path.join(plugins_dir, "Runtime", "CriWare", "CriWare")

def delete_folder(folder_path):
    """Delete a folder if it exists."""
    if os.path.exists(folder_path):
        print(f"Deleting folder: {folder_path}")
        shutil.rmtree(folder_path, ignore_errors=True)
    else:
        print(f"Folder not found: {folder_path}")

def delete_file(file_path):
    """Delete a file if it exists."""
    if os.path.exists(file_path):
        print(f"Deleting file: {file_path}")
        os.remove(file_path)
    else:
        print(f"File not found: {file_path}")

# Clean the root directory
for folder in root_folders_to_delete:
    delete_folder(os.path.join(root_dir, folder))

delete_file(os.path.join(root_dir, solution_file))

# Clean the Plugins directory
if os.path.exists(plugins_dir):
    for plugin in os.listdir(plugins_dir):
        plugin_path = os.path.join(plugins_dir, plugin)
        if os.path.isdir(plugin_path):
            # Special case for the CriWare plugin structure
            if plugin == "Runtime":
                nested_criware_path = criware_nested_path
                if os.path.exists(nested_criware_path):
                    for folder in root_folders_to_delete:
                        delete_folder(os.path.join(nested_criware_path, folder))
                else:
                    print(f"CriWare nested plugin path not found: {nested_criware_path}")
            else:
                # Delete Binaries and Intermediate folders in standard plugin structure
                for folder in root_folders_to_delete:
                    delete_folder(os.path.join(plugin_path, folder))
else:
    print(f"Plugins folder not found: {plugins_dir}")

print("Project cleanup complete.")
