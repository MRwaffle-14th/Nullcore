# Nullcore
GNUUtils? bloat. busybox? bloat. i, am here to remake the coreUtils of linux! do i have the skill? fuck no! can a man dream? yup. and thats what i am doing :]

in case you are completely crazy, and want to make a userspace using nullcore, i HIGHLY recommand using musl instead of glibc, and the most minimal shell you know (aka ash). and openrc/s6.


## What i will not add
some binaries in busybox/GNU are either bloat, or can be replicated within other commands really easily. due to the nature of nullcore i will not be adding some binaries in the nature. these currently include:

1. wc
2. nl
3. sort

### if you have changes to this list, to either remove a binary or add one i either forgot about or put in the nono list, feel free to add a pull request!
