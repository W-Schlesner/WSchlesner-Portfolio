import os
import random


def create_delete(location):
    new_folder = os.path.join(location, str(random.randint(0, 100)))

    if not os.path.isdir(new_folder):
        os.makedirs(new_folder)

    for file_count in range(5):
        with open(os.path.join(new_folder, '{:d}.txt'.format(file_count)), mode='w') as fp:
            for line in range(15):
                fp.write(str(random.randint(0, 100)))
                fp.write('\n')

    input('Folder and files created. Press enter to proceed with deletion of the files and folder...')

    for root_dir, inside_dirs, files in os.walk(new_folder):
        for file in files:
            os.remove(os.path.join(root_dir, file))

    os.rmdir(new_folder)

    print('Folder and files deleted.')


create_delete('.')
