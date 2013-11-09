cc_library(
    name = 'libthrift',
    deps = [
        '//thirdparty/thrift-0.9.1:libthrift'
    ]
)

cc_library(
    name = 'libthriftnb',
    deps = [
        '//thirdparty/thrift-0.9.1:libthriftnb'
    ]
)

cc_library(
    name = 'libthriftz',
    deps = [
        '//thirdparty/thrift-0.9.1:libthriftz'
    ]
)

cc_binary(
    name = "thrift",
    warning = 'no',
    incs = [
        'compiler/cpp',
        'compiler/cpp/src',
    ],
    srcs = [
        'compiler/cpp/src/md5.c',
        'compiler/cpp/src/main.cc',

        'compiler/cpp/src/parse/parse.cc',

        'compiler/cpp/thriftl.cc',
        'compiler/cpp/thrifty.cc',

        'compiler/cpp/src/generate/t_as3_generator.cc',
        'compiler/cpp/src/generate/t_c_glib_generator.cc',
        'compiler/cpp/src/generate/t_cocoa_generator.cc',
        'compiler/cpp/src/generate/t_cpp_generator.cc',
        'compiler/cpp/src/generate/t_csharp_generator.cc',
        'compiler/cpp/src/generate/t_delphi_generator.cc',
        'compiler/cpp/src/generate/t_d_generator.cc',
        'compiler/cpp/src/generate/t_erl_generator.cc',
        'compiler/cpp/src/generate/t_generator.cc',
        'compiler/cpp/src/generate/t_go_generator.cc',
        'compiler/cpp/src/generate/t_gv_generator.cc',
        'compiler/cpp/src/generate/t_hs_generator.cc',
        'compiler/cpp/src/generate/t_html_generator.cc',
        'compiler/cpp/src/generate/t_java_generator.cc',
        'compiler/cpp/src/generate/t_javame_generator.cc',
        'compiler/cpp/src/generate/t_js_generator.cc',
        'compiler/cpp/src/generate/t_ocaml_generator.cc',
        'compiler/cpp/src/generate/t_perl_generator.cc',
        'compiler/cpp/src/generate/t_php_generator.cc',
        'compiler/cpp/src/generate/t_py_generator.cc',
        'compiler/cpp/src/generate/t_rb_generator.cc',
        'compiler/cpp/src/generate/t_st_generator.cc',
        'compiler/cpp/src/generate/t_xsd_generator.cc',
    ],
)
