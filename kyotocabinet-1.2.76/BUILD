cc_library(
    name = 'kyotocabinet',
    warning = 'no',
    srcs = [
        'kccachedb.cc',
        'kccompare.cc',
        'kccompress.cc',
        'kcdb.cc',
        'kcdbext.cc',
        'kcdirdb.cc',
        'kcfile.cc',
        'kchashdb.cc',
        'kclangc.cc',
        'kcmap.cc',
        'kcplantdb.cc',
        'kcpolydb.cc',
        'kcprotodb.cc',
        'kcregex.cc',
        'kcstashdb.cc',
        'kctextdb.cc',
        'kcthread.cc',
        'kcutil.cc',
    ],
    deps = [
        '#pthread',
        '//thirdparty/lzo:lzo',
        '//thirdparty/zlib:zlib',
    ],
)

cc_binary(
    name = 'kcutiltest',
    warning = 'no',
    srcs = [
        'kcutiltest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcprototest',
    warning = 'no',
    srcs = [
        'kcprototest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcstashtest',
    warning = 'no',
    srcs = [
        'kcstashtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kccachetest',
    warning = 'no',
    srcs = [
        'kccachetest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcgrasstest',
    warning = 'no',
    srcs = [
        'kcgrasstest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kchashtest',
    warning = 'no',
    srcs = [
        'kchashtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kctreetest',
    warning = 'no',
    srcs = [
        'kctreetest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcdirtest',
    warning = 'no',
    srcs = [
        'kcdirtest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcforesttest',
    warning = 'no',
    srcs = [
        'kcforesttest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcpolytest',
    warning = 'no',
    srcs = [
        'kcpolytest.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kclangctest',
    warning = 'no',
    srcs = [
        'kclangctest.c',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcutilmgr',
    warning = 'no',
    srcs = [
        'kcutilmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kchashmgr',
    warning = 'no',
    srcs = [
        'kchashmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kctreemgr',
    warning = 'no',
    srcs = [
        'kctreemgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcdirmgr',
    warning = 'no',
    srcs = [
        'kcdirmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcforestmgr',
    warning = 'no',
    srcs = [
        'kcforestmgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)

cc_binary(
    name = 'kcpolymgr',
    warning = 'no',
    srcs = [
        'kcpolymgr.cc',
    ],
    deps = [
        ':kyotocabinet',
    ],
)
