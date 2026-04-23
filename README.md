# Nullcore
GNUUtils? bloat. busybox? bloat. i, am here to remake the coreUtils of linux! do i have the skill? fuck no! can a man dream? yup. and thats what i am doing :]

in case you are completely crazy, and want to make a userspace using nullcore, i HIGHLY recommand using musl instead of glibc, and the most minimal shell you know (aka ash). and openrc/s6.


## What i will not add
some binaries in busybox/GNU are either bloat, or can be replicated within other commands really easily. due to the nature of nullcore i will not be adding some binaries in the nature. these currently include:

1. awk
2. base32
3. csplit
4. cut
5. du
6. factor
7. find
8. fmt
9. fold
10. nice
11. nl
12. paste
13. pr
14. printf
15. ptx
16. sed
17. seq
18. sort
19. sort
20. stty
21. sum
22. tee
23. tr
24. uniq
25. wc
26. wc
27. yes

### if you have changes to this list, to either remove a binary or add one i either forgot about or put in the nono list, feel free to add a pull request!

## extra features
nullcore is not a place to expect extra features, as i strip mst of the binaries to their bare-minimum working straight and scrap a lot of binaries because of their pssible easy replacement with other binaries that already do something. with that said, when a friend came up with a joke idea to add, i could not ressist!
those features, for now, are the maybe command, which returns either a 1 or a 0 exit code. when does it do it? i have no idea :] here is a list of the current extra features added to nullcore
1. maybe.o - returns 1 or 0 randomly
