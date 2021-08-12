- When running memory-user.c with 50 vs. 5000 MB shows that the memory used
  on the system is about the same.

MEMORY MAP FOR ./memory-user 40000000 (named ./a.out below)
Process:         a.out [11233]
Path:            /Users/USER/Documents/*/a.out
Load Address:    0x105954000
Identifier:      a.out
Version:         ???
Code Type:       X86-64
Platform:        macOS
Parent Process:  zsh [3368]

Date/Time:       2021-08-11 19:42:03.198 -0600
Launch Time:     2021-08-11 19:40:48.950 -0600
OS Version:      macOS 11.1 (20C69)
Report Version:  7
Analysis Tool:   /usr/bin/vmmap

Physical footprint:         38.4M
Physical footprint (peak):  38.4M
----

Virtual Memory Map of process 11233 (a.out)
Output report format:  2.4  -- 64-bit process
VM page size:  4096 bytes

==== Non-writable regions for process 11233
REGION TYPE                    START - END         [ VSIZE  RSDNT  DIRTY   SWAP] PRT/MAX SHRMOD PURGE    REGION DETAIL
__TEXT                      105954000-105958000    [   16K    16K     0K     0K] r-x/r-x SM=COW          /Users/USER/Documents/*/a.out
__DATA_CONST                105958000-10595c000    [   16K    16K     4K     0K] r--/rw- SM=COW          /Users/USER/Documents/*/a.out
__LINKEDIT                  105960000-105961000    [    4K     4K     0K     0K] r--/r-- SM=COW          /Users/USER/Documents/*/a.out
__LINKEDIT                  105961000-105964000    [   12K     0K     0K     0K] r--/r-- SM=NUL          /Users/USER/Documents/*/a.out
shared memory               105966000-105967000    [    4K     4K     4K     0K] r--/r-- SM=SHM  
MALLOC metadata             105967000-105968000    [    4K     4K     4K     0K] r--/rwx SM=COW          DefaultMallocZone_0x105967000 zone structure
MALLOC guard page           10596c000-10596d000    [    4K     0K     0K     0K] ---/rwx SM=ZER  
MALLOC guard page           105973000-105974000    [    4K     0K     0K     0K] ---/rwx SM=ZER  
MALLOC guard page           105974000-105975000    [    4K     0K     0K     0K] ---/rwx SM=NUL  
MALLOC guard page           10597b000-10597c000    [    4K     0K     0K     0K] ---/rwx SM=NUL  
MALLOC metadata             10597c000-10597d000    [    4K     4K     4K     0K] r--/rwx SM=PRV  
__TEXT                      1113f7000-111493000    [  624K   444K     0K     0K] r-x/r-x SM=COW          /usr/lib/dyld
__DATA_CONST                111493000-11149b000    [   32K    20K    20K     0K] r--/rw- SM=COW          /usr/lib/dyld
__LINKEDIT                  1114d3000-11150b000    [  224K     4K     0K     0K] r--/r-- SM=COW          /usr/lib/dyld
__LINKEDIT                  11150b000-11150f000    [   16K     0K     0K     0K] r--/r-- SM=NUL          /usr/lib/dyld
STACK GUARD              7ffee62ac000-7ffee9aac000 [ 56.0M     0K     0K     0K] ---/rwx SM=NUL          stack guard for thread 0
__TEXT                   7fff20047000-7fff20049000 [    8K     8K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_blocks.dylib
__TEXT                   7fff20049000-7fff2007f000 [  216K   204K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libxpc.dylib
__TEXT                   7fff2007f000-7fff20097000 [   96K    96K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_trace.dylib
__TEXT                   7fff20097000-7fff20136000 [  636K   592K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcorecrypto.dylib
__TEXT                   7fff20136000-7fff20163000 [  180K   152K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_malloc.dylib
__TEXT                   7fff20163000-7fff201a8000 [  276K   252K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libdispatch.dylib
__TEXT                   7fff201a8000-7fff201e1000 [  228K   212K     0K     0K] r-x/r-x SM=COW          /usr/lib/libobjc.A.dylib
__TEXT                   7fff201e1000-7fff201e4000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__TEXT                   7fff201e4000-7fff2026d000 [  548K   496K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_c.dylib
__TEXT                   7fff2026d000-7fff202c3000 [  344K   284K     0K     0K] r-x/r-x SM=COW          /usr/lib/libc++.1.dylib
__TEXT                   7fff202c3000-7fff202dc000 [  100K    88K     0K     0K] r-x/r-x SM=COW          /usr/lib/libc++abi.dylib
__TEXT                   7fff202dc000-7fff2030b000 [  188K   176K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_kernel.dylib
__TEXT                   7fff2030b000-7fff20317000 [   48K    48K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_pthread.dylib
__TEXT                   7fff20317000-7fff20352000 [  236K   228K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libdyld.dylib
__TEXT                   7fff20352000-7fff2035c000 [   40K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_platform.dylib
__TEXT                   7fff2035c000-7fff20388000 [  176K   140K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_info.dylib
__TEXT                   7fff22774000-7fff2277e000 [   40K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_darwin.dylib
__TEXT                   7fff22b8e000-7fff22b9a000 [   48K    48K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_notify.dylib
__TEXT                   7fff24ae9000-7fff24af8000 [   60K    52K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__TEXT                   7fff24b55000-7fff24b6c000 [   92K    92K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_asl.dylib
__TEXT                   7fff26253000-7fff2625b000 [   32K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__TEXT                   7fff282a5000-7fff282b6000 [   68K    56K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_containermanager.dylib
__TEXT                   7fff28fb1000-7fff28fb5000 [   16K    16K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_configuration.dylib
__TEXT                   7fff28fb5000-7fff28fba000 [   20K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_sandbox.dylib
__TEXT                   7fff29cbc000-7fff29cbf000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libquarantine.dylib
__TEXT                   7fff2a23d000-7fff2a242000 [   20K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_coreservices.dylib
__TEXT                   7fff2a458000-7fff2a4a0000 [  288K   200K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_m.dylib
__TEXT                   7fff2a4a1000-7fff2a4a7000 [   24K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libmacho.dylib
__TEXT                   7fff2a4c3000-7fff2a4cf000 [   48K    44K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcommonCrypto.dylib
__TEXT                   7fff2a4cf000-7fff2a4da000 [   44K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libunwind.dylib
__TEXT                   7fff2a4da000-7fff2a4e2000 [   32K    16K     0K     0K] r-x/r-x SM=COW          /usr/lib/liboah.dylib
__TEXT                   7fff2a4e2000-7fff2a4ed000 [   44K    44K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcopyfile.dylib
__TEXT                   7fff2a4ed000-7fff2a4f5000 [   32K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcompiler_rt.dylib
__TEXT                   7fff2a4f5000-7fff2a4f8000 [   12K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_collections.dylib
__TEXT                   7fff2a4f8000-7fff2a4fb000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_secinit.dylib
__TEXT                   7fff2a4fb000-7fff2a4fe000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libremovefile.dylib
__TEXT                   7fff2a4fe000-7fff2a4ff000 [    4K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libkeymgr.dylib
__TEXT                   7fff2a4ff000-7fff2a507000 [   32K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_dnssd.dylib
__TEXT                   7fff2a507000-7fff2a50d000 [   24K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcache.dylib
__TEXT                   7fff2a50d000-7fff2a50f000 [    8K     8K     0K     0K] r-x/r-x SM=COW          /usr/lib/libSystem.B.dylib
__TEXT                   7fff2d940000-7fff2d941000 [    4K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/liblaunch.dylib
__TEXT                   7fff2fded000-7fff2fdee000 [    4K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_product_info_filter.dylib
__OBJC_RO                7fff7c2f7000-7fff7ff81000 [ 60.5M  35.6M     0K     0K] r-x/r-x SM=COW          /usr/lib/libobjc.A.dylib
__LINKEDIT               7fffc05c5000-7fffdeede000 [489.1M  31.4M     0K     0K] r--/r-- SM=COW          dyld shared cache combined __LINKEDIT
VM_ALLOCATE              7fffffe00000-7fffffe01000 [    4K     4K     4K     0K] r--/r-- SM=ALI  
VM_ALLOCATE              7ffffff0b000-7ffffff0c000 [    4K     4K     4K     0K] r-x/r-x SM=ALI  

==== Writable regions for process 11233
REGION TYPE                    START - END         [ VSIZE  RSDNT  DIRTY   SWAP] PRT/MAX SHRMOD PURGE    REGION DETAIL
__DATA                      10595c000-105960000    [   16K    16K     4K     0K] rw-/rw- SM=COW          /Users/USER/Documents/*/a.out
Kernel Alloc Once           105964000-105966000    [    8K     4K     4K     0K] rw-/rwx SM=PRV  
MALLOC metadata             105968000-10596c000    [   16K     4K     4K     0K] rw-/rwx SM=COW  
MALLOC metadata             10596d000-105973000    [   24K    24K    24K     0K] rw-/rwx SM=COW  
MALLOC metadata             105975000-10597b000    [   24K    24K    24K     0K] rw-/rwx SM=COW  
__DATA                      11149b000-11149f000    [   16K    16K    16K     0K] rw-/rw- SM=COW          /usr/lib/dyld
__DATA                      11149f000-1114d3000    [  208K    32K    32K     0K] rw-/rw- SM=PRV          /usr/lib/dyld
MALLOC_TINY              7fe3b8400000-7fe3b8500000 [ 1024K    16K    16K     0K] rw-/rwx SM=COW          DefaultMallocZone_0x105967000
MALLOC_LARGE metadata    7fe3b8500000-7fe3b8501000 [    4K     4K     4K     0K] rw-/rwx SM=PRV          DefaultMallocZone_0x105967000
MALLOC_SMALL             7fe3b8800000-7fe3b9000000 [ 8192K     8K     8K     0K] rw-/rwx SM=COW          DefaultMallocZone_0x105967000
MALLOC_LARGE             7fe3b9000000-7fe3bb626000 [ 38.1M  38.1M  38.1M     0K] rw-/rwx SM=PRV          DefaultMallocZone_0x105967000
Stack                    7ffee9aac000-7ffeea2ac000 [ 8192K    16K    16K     0K] rw-/rwx SM=PRV          thread 0
__DATA_CONST             7fff80001000-7fff800014d0 [  1232   1232     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA_CONST             7fff800014d0-7fff80006d80 [   22K    22K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libxpc.dylib
__DATA_CONST             7fff80006d80-7fff800082a0 [    5K     5K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA_CONST             7fff800082a0-7fff80009a18 [    6K     6K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libcorecrypto.dylib
__DATA_CONST             7fff80009a20-7fff8000a008 [  1512   1512     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_malloc.dylib
__DATA_CONST             7fff8000a040-7fff8001e378 [   81K    33K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libdispatch.dylib
__DATA_CONST             7fff8001e380-7fff8001fa68 [    6K     6K     0K     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__DATA_CONST             7fff8001fa68-7fff8001fb90 [   296    296     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA_CONST             7fff8001fb90-7fff80021d00 [    8K     8K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_c.dylib
__DATA_CONST             7fff80021d00-7fff80023e58 [    8K     8K     0K     0K] rw-/rwx SM=COW          /usr/lib/libc++.1.dylib
__DATA_CONST             7fff80023e58-7fff80027120 [   13K    13K     0K     0K] rw-/rwx SM=COW          /usr/lib/libc++abi.dylib
__DATA_CONST             7fff80027120-7fff80029540 [    9K     9K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_kernel.dylib
__DATA_CONST             7fff80029540-7fff80029790 [   592    592     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_pthread.dylib
__DATA_CONST             7fff80029790-7fff8002cbf0 [   13K    13K   3056     0K] rw-/rwx SM=COW          /usr/lib/system/libdyld.dylib
__DATA_CONST             7fff8002cbf0-7fff8002ced8 [   744    744    744     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_platform.dylib
unused shlib __DATA      7fff8002ced8-7fff8002cee0 [     8      8      8     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_CONST             7fff8002cee0-7fff8002e588 [    6K     6K    288     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_info.dylib
__DATA_CONST             7fff804e23f0-7fff804e51d0 [   11K     7K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_darwin.dylib
__DATA_CONST             7fff80508e78-7fff805092b8 [  1088   1088     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA_CONST             7fff807bd3b8-7fff807be428 [    4K     4K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__DATA_CONST             7fff808093a0-7fff8080a420 [    4K     4K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_asl.dylib
__DATA_CONST             7fff80901b80-7fff80902020 [  1184   1184     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA_CONST             7fff80b5cf30-7fff80b5d018 [   232    232     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_m.dylib
__DATA_CONST             7fff80b5d0b0-7fff80b5d870 [  1984   1984     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libmacho.dylib
__DATA_CONST             7fff80b5d9a0-7fff80b5dbf0 [   592    592     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libunwind.dylib
__DATA_CONST             7fff80b5dbf0-7fff80b5deb0 [   704    704     0K     0K] rw-/rw- SM=COW          /usr/lib/liboah.dylib
__DATA_CONST             7fff80b5deb0-7fff80b5e5b0 [  1792   1792     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcopyfile.dylib
__DATA_CONST             7fff80b5e5b0-7fff80b5e648 [   152    152     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcompiler_rt.dylib
__DATA_CONST             7fff80b5e648-7fff80b5e670 [    40     40     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_collections.dylib
__DATA_CONST             7fff80b5e670-7fff80b5e9a0 [   816    816     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_secinit.dylib
__DATA_CONST             7fff80b5e9a0-7fff80b5eb10 [   368    368     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libremovefile.dylib
__DATA_CONST             7fff80b5eb10-7fff80b5eb88 [   120    120     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libkeymgr.dylib
__DATA_CONST             7fff80b5eb88-7fff80b5eca8 [   288    288     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcache.dylib
unused shlib __DATA      7fff8893e000-7fff8893ea20 [  2592   2592   2592     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff8893ea20-7fff8893fc38 [    5K     5K     5K     0K] rw-/rwx SM=COW          /usr/lib/libc++.1.dylib
__DATA_DIRTY             7fff8893fc38-7fff8893fca0 [   104    104    104     0K] rw-/rwx SM=COW          /usr/lib/libc++abi.dylib
unused shlib __DATA      7fff8893fca0-7fff88940000 [   864    864    864     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
unused shlib __DATA      7fff88947000-7fff88947f40 [  3904   3904   3904     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff88947f40-7fff8894adc2 [   12K    12K    12K     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
unused shlib __DATA      7fff8894adc2-7fff8894b000 [   574    574    574     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
unused shlib __DATA      7fff8896b000-7fff8896ba80 [  2688   2688   2688     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff8896ba80-7fff8896c1d8 [  1880   1880   1880     0K] rw-/rwx SM=COW          /usr/lib/system/libcorecrypto.dylib
unused shlib __DATA      7fff8896c1d8-7fff8896c200 [    40     40     40     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff8896c200-7fff8896f840 [   14K    14K    10K     0K] rw-/rwx SM=COW          /usr/lib/system/libdispatch.dylib
__DATA_DIRTY             7fff8896f840-7fff8896fe98 [  1624   1624   1624     0K] rw-/rwx SM=COW          /usr/lib/system/libdyld.dylib
unused shlib __DATA      7fff8896fe98-7fff8896fea0 [     8      8      8     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff8896fea0-7fff88970014 [   372    372    372     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_asl.dylib
unused shlib __DATA      7fff88970014-7fff88970018 [     4      4      4     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff88970018-7fff88970210 [   504    504    504     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA_DIRTY             7fff88970210-7fff88972df0 [   11K    11K    11K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_c.dylib
__DATA_DIRTY             7fff88972df0-7fff88972e20 [    48     48     48     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_darwin.dylib
__DATA_DIRTY             7fff88972e20-7fff88972e30 [    16     16     16     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA_DIRTY             7fff88972e30-7fff889730c0 [   656    656    656     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_info.dylib
__DATA_DIRTY             7fff889730c0-7fff88973790 [  1744   1744   1744     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_kernel.dylib
__DATA_DIRTY             7fff88973790-7fff889739b0 [   544    544    544     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_malloc.dylib
__DATA_DIRTY             7fff889739b0-7fff889739f1 [    65     65     65     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_networkextension.dylib
unused shlib __DATA      7fff889739f1-7fff889739f8 [     7      7      7     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff889739f8-7fff88973a00 [     8      8      8     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA_DIRTY             7fff88973a00-7fff88973a14 [    20     20     20     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_platform.dylib
unused shlib __DATA      7fff88973a14-7fff88973a20 [    12     12     12     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA_DIRTY             7fff88973a20-7fff889752c0 [    6K     6K     6K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_pthread.dylib
__DATA_DIRTY             7fff889752c0-7fff889752d0 [    16     16     16     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA_DIRTY             7fff889752d0-7fff88975740 [  1136   1136   1136     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA_DIRTY             7fff88975740-7fff88976140 [  2560   2560   2560     0K] rw-/rwx SM=COW          /usr/lib/system/libxpc.dylib
unused shlib __DATA      7fff88976140-7fff88977000 [  3776   3776   3776     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff88979000-7fff88979080 [   128    128    128     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA                   7fff88979080-7fff88979cb8 [  3128   3128   3128     0K] rw-/rwx SM=COW          /usr/lib/system/libxpc.dylib
unused shlib __DATA      7fff88979cb8-7fff88979cc0 [     8      8      8     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff88979cc0-7fff8897a1f8 [  1336   1336    832     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA                   7fff8897a200-7fff88981588 [   29K     8K     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libcorecrypto.dylib
__DATA                   7fff88985000-7fff8898d180 [   32K     8K    384     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_malloc.dylib
__DATA                   7fff8898d180-7fff8898e548 [    5K     5K   3712     0K] rw-/rwx SM=COW          /usr/lib/system/libdispatch.dylib
__DATA                   7fff8898f000-7fff88993450 [   17K    17K     4K     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__DATA                   7fff88993450-7fff88993490 [    64     64     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA                   7fff88993490-7fff889963e8 [   12K    12K   1000     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_c.dylib
unused shlib __DATA      7fff889963e8-7fff88997000 [  3096   3096   3096     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff88997000-7fff8899fbf0 [   35K    19K     0K     0K] rw-/rwx SM=COW          /usr/lib/libc++.1.dylib
__DATA                   7fff8899fbf0-7fff8899fef8 [   776    776     0K     0K] rw-/rwx SM=COW          /usr/lib/libc++abi.dylib
__DATA                   7fff8899ff00-7fff889a0148 [   584    584    328     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_kernel.dylib
unused shlib __DATA      7fff889a0148-7fff889a0150 [     8      8      8     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff889a0150-7fff889a01c6 [   118    118    118     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_pthread.dylib
unused shlib __DATA      7fff889a01c6-7fff889a01d0 [    10     10     10     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff889a01d0-7fff889a04e1 [   785    785    785     0K] rw-/rwx SM=COW          /usr/lib/system/libdyld.dylib
unused shlib __DATA      7fff889a04e1-7fff889a04e8 [     7      7      7     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff889a04e8-7fff889a0528 [    64     64     64     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_platform.dylib
unused shlib __DATA      7fff889a0528-7fff889a0530 [     8      8      8     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__DATA                   7fff889a0530-7fff889a1278 [  3400   3400   2768     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_info.dylib
__DATA                   7fff88a25368-7fff88a25380 [    24     24     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_darwin.dylib
__DATA                   7fff88a2cf70-7fff88a2cfc3 [    83     83     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA                   7fff88b3ceb0-7fff88b3cfa1 [   241    241     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__DATA                   7fff88b3d5a0-7fff88b3d6c0 [   288    288     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_asl.dylib
__DATA                   7fff88bfea28-7fff88bfea70 [    72     72     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA                   7fff88f00c10-7fff88f02328 [    6K     6K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_containermanager.dylib
__DATA                   7fff890df5a0-7fff890dfb41 [  1441   1441     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_configuration.dylib
__DATA                   7fff890dfb50-7fff890dfde8 [   664    664     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_sandbox.dylib
__DATA                   7fff89148930-7fff89148aa0 [   368    368     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libquarantine.dylib
__DATA                   7fff89160bc0-7fff89161648 [  2696   2696     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_coreservices.dylib
__DATA                   7fff891974b8-7fff891974c4 [    12     12     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_m.dylib
__DATA                   7fff89197508-7fff89197510 [     8      8     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libmacho.dylib
__DATA                   7fff891975b0-7fff89198b00 [    5K     5K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcommonCrypto.dylib
__DATA                   7fff89198b00-7fff89199401 [  2305   2305     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libunwind.dylib
__DATA                   7fff89199408-7fff89199418 [    16     16     0K     0K] rw-/rw- SM=COW          /usr/lib/liboah.dylib
__DATA                   7fff89199418-7fff89199430 [    24     24     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcopyfile.dylib
__DATA                   7fff89199430-7fff8919a440 [    4K     4K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcompiler_rt.dylib
__DATA                   7fff8919a440-7fff8919a448 [     8      8     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_collections.dylib
__DATA                   7fff8919a448-7fff8919a490 [    72     72     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_secinit.dylib
__DATA                   7fff8919a490-7fff8919a498 [     8      8     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libremovefile.dylib
__DATA                   7fff8919a498-7fff8919a4a0 [     8      8     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libkeymgr.dylib
__DATA                   7fff8919a4a0-7fff8919a7e1 [   833    833     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_dnssd.dylib
__DATA                   7fff8919a7e8-7fff8919a7f0 [     8      8     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcache.dylib
__DATA                   7fff8919a7f0-7fff8919ab48 [   856    856     0K     0K] rw-/rw- SM=COW          /usr/lib/libSystem.B.dylib
unused shlib __DATA      7fff8dd3d000-7fff8dd3d0f0 [   240    240    240     0K] rw-/rwx SM=COW          unused system shared lib __DATA, on dirty page
__OBJC_RW                7fff8dd3d0f0-7fff8de00000 [  780K   636K   3856     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__OBJC_RW                7fff8de00000-7fff8dfa2000 [ 1672K   684K     0K     0K] rw-/rw- SM=COW          /usr/lib/libobjc.A.dylib

==== Legend
SM=sharing mode:  
	COW=copy_on_write PRV=private NUL=empty ALI=aliased 
	SHM=shared ZER=zero_filled S/A=shared_alias
PURGE=purgeable mode:  
	V=volatile N=nonvolatile E=empty   otherwise is unpurgeable

==== Summary for process 11233
ReadOnly portion of Libraries: Total=494.2M resident=35.6M(7%) swapped_out_or_unallocated=458.6M(93%)
Writable regions: Total=55.4M written=38.2M(69%) resident=38.3M(69%) swapped_out=0K(0%) unallocated=17.1M(31%)

                                VIRTUAL RESIDENT    DIRTY  SWAPPED VOLATILE   NONVOL    EMPTY   REGION 
REGION TYPE                        SIZE     SIZE     SIZE     SIZE     SIZE     SIZE     SIZE    COUNT (non-coalesced) 
===========                     ======= ========    =====  ======= ========   ======    =====  ======= 
Kernel Alloc Once                    8K       4K       4K       0K       0K       0K       0K        1 
MALLOC guard page                   16K       0K       0K       0K       0K       0K       0K        4 
MALLOC metadata                     72K      60K      60K       0K       0K       0K       0K        5 
MALLOC_LARGE                      38.1M    38.1M    38.1M       0K       0K       0K       0K        1         see MALLOC ZONE table below
MALLOC_LARGE metadata                4K       4K       4K       0K       0K       0K       0K        1         see MALLOC ZONE table below
MALLOC_SMALL                      8192K       8K       8K       0K       0K       0K       0K        1         see MALLOC ZONE table below
MALLOC_TINY                       1024K      16K      16K       0K       0K       0K       0K        1         see MALLOC ZONE table below
STACK GUARD                       56.0M       0K       0K       0K       0K       0K       0K        1 
Stack                             8192K      16K      16K       0K       0K       0K       0K        1 
VM_ALLOCATE                          8K       8K       8K       0K       0K       0K       0K        2 
__DATA                             405K     168K      69K       0K       0K       0K       0K       43 
__DATA_CONST                       258K     194K      28K       0K       0K       0K       0K       34 
__DATA_DIRTY                        58K      58K      54K       0K       0K       0K       0K       21 
__LINKEDIT                       489.3M    31.4M       0K       0K       0K       0K       0K        5 
__OBJC_RO                         60.5M    35.6M       0K       0K       0K       0K       0K        1 
__OBJC_RW                         2452K    1320K     3856       0K       0K       0K       0K        2 
__TEXT                            5004K    4348K       0K       0K       0K       0K       0K       44 
shared memory                        4K       4K       4K       0K       0K       0K       0K        1 
unused but dirty shlib __DATA       17K      17K      17K       0K       0K       0K       0K       19 
===========                     ======= ========    =====  ======= ========   ======    =====  ======= 
TOTAL                            669.1M   111.2M    38.4M       0K       0K       0K       0K      188 

                                 VIRTUAL   RESIDENT      DIRTY    SWAPPED ALLOCATION      BYTES DIRTY+SWAP          REGION
MALLOC ZONE                         SIZE       SIZE       SIZE       SIZE      COUNT  ALLOCATED  FRAG SIZE  % FRAG   COUNT
===========                      =======  =========  =========  =========  =========  =========  =========  ======  ======
DefaultMallocZone_0x105967000      47.2M      38.2M      38.2M         0K        165      38.2M        20K      1%       4

MEMORY USAGE DURING RUNTIME:
Wired Memory:		2866 MB
Active Memory:		4165 MB
Inactive Memory:	5731 MB
Free Memory:		1932 MB
Real Mem Total (ps):	9814.945 MB

MEMORY USAGE AFTER RUNTIME:
Wired Memory:		2862 MB
Active Memory:		4131 MB
Inactive Memory:	5731 MB
Free Memory:		1970 MB
Real Mem Total (ps):	9779.438 MB
