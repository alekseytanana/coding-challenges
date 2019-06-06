import os
import os.path


def find_py_files(search_dir):
    os.chdir(search_dir)
    py_f = []
    for current_dir, dirs, files in os.walk("."):
        py_f.extend([f for f in files if f.endswith(".py")])
        (py_f.extend(find_py_files(d)) for d in dirs)
    os.chdir("..")
    return py_f


py_files = sorted(find_py_files("main"))
with open("py_files.txt", "w") as f:
    for l in py_files:
        f.writelines(l + "\n")