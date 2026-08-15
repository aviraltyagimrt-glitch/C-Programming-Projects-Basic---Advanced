import os
files = os.listdir("Cluttered_Folder")
print(files)
j = 1
for i in files:
    if i.endswith(".png"):
        print(i)
        os.rename(f"Cluttered_Folder/{i}",f"Cluttered_Folder/Image-{j}.png")
        j = j+1