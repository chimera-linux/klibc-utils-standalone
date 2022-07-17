project('klibc-utils-standalone', ['c'],
    version: '2.0.10',
    default_options: ['c_std=gnu99', 'warning_level=2', 'buildtype=plain'],
    license: 'MIT',
)

common_cargs = []

inc_root = include_directories('.')
bin_path = join_paths(get_option('libexecdir'), 'klibc-utils-standalone')

executable('cpio', 'cpio.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('dmesg', 'dmesg.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('halt', 'halt.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

meson.add_install_script('halt.sh', bin_path)

executable('kill', 'kill.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('losetup', 'losetup.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('minips', 'minips.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('mount', ['mount_main.c', 'mount_opts.c'],
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('nuke', 'nuke.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('pivot_root', 'pivot_root.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)

executable('umount', 'umount.c',
    c_args: common_cargs,
    include_directories: inc_root,
    install: true,
    install_dir: bin_path
)
