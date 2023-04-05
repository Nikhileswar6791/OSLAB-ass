cp ./const.h /usr/src/minix/include/minix/const.h;
cp ./fslib.c /usr/src/minix/lib/libc/gen/fslib.c;
cp ./new_vfs/link.c /usr/src/minix/servers/vfs/link.c;
cp ./new_vfs/open.c /usr/src/minix/servers/vfs/open.c;
cp ./new_vfs/read.c /usr/src/minix/servers/vfs/read.c;
cp ./new_mfs/read.c /usr/src/minix/fs/mfs/read.c;
cp ./new_mfs/write.c /usr/src/minix/fs/mfs/write.c;
cd /usr/src;
make build MKUPDATE=yes
