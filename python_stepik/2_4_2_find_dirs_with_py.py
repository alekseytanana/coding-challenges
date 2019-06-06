import os

for current_dir, dirs, files in os.walk("main"):
    for file in files:
        if file.endswith(".py"):
            print(current_dir)
            break