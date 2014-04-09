cc_library(
  name = 'zookeeper',
  warning = 'no',
  defs = [
    'THREADED'
  ],
  srcs = [
    'generated/zookeeper.jute.c',
    'src/mt_adaptor.c',
    'src/recordio.c',
    'src/zk_hashtable.c',
    'src/zk_log.c',
    'src/zookeeper.c',
    'src/hashtable/hashtable.c',
    'src/hashtable/hashtable_itr.c',
  ],
  deps = [
    '#pthread',
  ]
)

cc_binary(
  name = 'cli',
  warning = 'no',
  defs = [
    'THREADED'
  ],
  srcs = [
    'src/cli.c',
  ],
  deps = [
    ':zookeeper',
  ]
)

cc_binary(
  name = 'load_gen',
  warning = 'no',
  defs = [
    'THREADED'
  ],
  srcs = [
    'src/load_gen.c',
  ],
  deps = [
    ':zookeeper',
  ]
)
