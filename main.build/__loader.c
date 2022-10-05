
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 107 > 0
static unsigned char *bytecode_data[107];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_async_generator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_async_generator$_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_async_generator$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_async_generator$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_cmp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_funcs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_make(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_next_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_version_info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$setters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_html5lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_htmlparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$dammit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$element(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$formatter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$md(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_termui_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_textwrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$shell_completion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$termui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_catch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_ihatexml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_inputstream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_trie$py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$alphabeticalattributes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$inject_meta_charset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$optionaltags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$sanitizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$filters$whitespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$html5parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$serializer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$dom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$etree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treebuilders$etree_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$dom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$etree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$etree_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_html5lib$treewalkers$genshi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$ElementInclude(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$_elementpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$cssselect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$doctestcompare(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$ElementSoup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_diffcommand(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_html5builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_setmixin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$clean(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$defs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$diff(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$formfill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$html5parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$soupparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$usedoctest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$includes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$isoschematron(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$pyclasslookup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$sax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$usedoctest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_outcome(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_outcome$_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_outcome$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_outcome$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee$_asyncio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee$_executor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee$_trio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyee$_twisted(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$browser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$chromium_downloader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$coverage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$dialog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$element_handle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$emulation_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$execution_context(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$frame_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$launcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$multimap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$navigator_watcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$network_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$target(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$tracing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$us_keyboard_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyppeteer$worker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sortedcontainers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sortedcontainers$sorteddict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sortedcontainers$sortedlist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sortedcontainers$sortedset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$__meta__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_match(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$pretty(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_dist_ver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_monitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_tqdm_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$std(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_channel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_asyncgens(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_entry_queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_generated_instrumentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_generated_io_epoll(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_generated_io_kqueue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_generated_run(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_instrumentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_io_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_io_epoll(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_io_kqueue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_ki(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_local(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_mock_clock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_multierror(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_parking_lot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_run(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_thread_cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_traps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_unbounded_queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_core$_wakeup_socketpair(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_deprecate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_dtls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_file_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_open_tcp_listeners(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_open_tcp_stream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_open_unix_stream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_serve_listeners(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_highlevel_ssl_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_ssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_subprocess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_subprocess_platform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_subprocess_platform$kqueue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_subprocess_platform$waitid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_sync(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_threads(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_timeouts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_unix_pipes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$from_thread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$lowlevel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_trio$to_thread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings$labels(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_webencodings$x_user_defined(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$datastructures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions$permessage_deflate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$frames(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$headers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$http11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$imports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$framing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$handshake(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$uri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/Users/qwerzl/Documents/Python Projects/ScrapeL/main.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/Users/qwerzl/Documents/Python Projects/ScrapeL/main.py"
#endif
},
    {"appdirs", NULL, 0, 20318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/appdirs.py"
#endif
},
    {"argparse", NULL, 1, 63164, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/argparse.py"
#endif
},
    {"async_generator", modulecode_async_generator, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/async_generator/__init__.py"
#endif
},
    {"async_generator._impl", modulecode_async_generator$_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/async_generator/_impl.py"
#endif
},
    {"async_generator._util", modulecode_async_generator$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/async_generator/_util.py"
#endif
},
    {"async_generator._version", modulecode_async_generator$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/async_generator/_version.py"
#endif
},
    {"asyncio", NULL, 2, 807, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/__init__.py"
#endif
},
    {"asyncio.base_events", NULL, 3, 51854, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/base_events.py"
#endif
},
    {"asyncio.base_futures", NULL, 4, 1974, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/base_futures.py"
#endif
},
    {"asyncio.base_subprocess", NULL, 5, 9449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/base_subprocess.py"
#endif
},
    {"asyncio.base_tasks", NULL, 6, 2044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/base_tasks.py"
#endif
},
    {"asyncio.constants", NULL, 7, 649, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/constants.py"
#endif
},
    {"asyncio.coroutines", NULL, 8, 6686, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/coroutines.py"
#endif
},
    {"asyncio.events", NULL, 9, 28486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/events.py"
#endif
},
    {"asyncio.exceptions", NULL, 10, 2531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/exceptions.py"
#endif
},
    {"asyncio.format_helpers", NULL, 11, 2402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/format_helpers.py"
#endif
},
    {"asyncio.futures", NULL, 12, 11938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/futures.py"
#endif
},
    {"asyncio.locks", NULL, 13, 13954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/locks.py"
#endif
},
    {"asyncio.log", NULL, 14, 292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/log.py"
#endif
},
    {"asyncio.mixins", NULL, 15, 1140, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/mixins.py"
#endif
},
    {"asyncio.protocols", NULL, 16, 8361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/protocols.py"
#endif
},
    {"asyncio.queues", NULL, 17, 8363, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/queues.py"
#endif
},
    {"asyncio.runners", NULL, 18, 2155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/runners.py"
#endif
},
    {"asyncio.selector_events", NULL, 19, 29545, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/selector_events.py"
#endif
},
    {"asyncio.sslproto", NULL, 20, 22017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/sslproto.py"
#endif
},
    {"asyncio.staggered", NULL, 21, 4246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/staggered.py"
#endif
},
    {"asyncio.streams", NULL, 22, 20408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/streams.py"
#endif
},
    {"asyncio.subprocess", NULL, 23, 7125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/subprocess.py"
#endif
},
    {"asyncio.tasks", NULL, 24, 23699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/tasks.py"
#endif
},
    {"asyncio.threads", NULL, 25, 1048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/threads.py"
#endif
},
    {"asyncio.transports", NULL, 26, 12395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/transports.py"
#endif
},
    {"asyncio.trsock", NULL, 27, 7905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/trsock.py"
#endif
},
    {"asyncio.unix_events", NULL, 28, 41721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/asyncio/unix_events.py"
#endif
},
    {"attr", modulecode_attr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/__init__.py"
#endif
},
    {"attr._cmp", modulecode_attr$_cmp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_cmp.py"
#endif
},
    {"attr._compat", modulecode_attr$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_compat.py"
#endif
},
    {"attr._config", modulecode_attr$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_config.py"
#endif
},
    {"attr._funcs", modulecode_attr$_funcs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_funcs.py"
#endif
},
    {"attr._make", modulecode_attr$_make, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_make.py"
#endif
},
    {"attr._next_gen", modulecode_attr$_next_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_next_gen.py"
#endif
},
    {"attr._version_info", modulecode_attr$_version_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/_version_info.py"
#endif
},
    {"attr.converters", modulecode_attr$converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/converters.py"
#endif
},
    {"attr.exceptions", modulecode_attr$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/exceptions.py"
#endif
},
    {"attr.filters", modulecode_attr$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/filters.py"
#endif
},
    {"attr.setters", modulecode_attr$setters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/setters.py"
#endif
},
    {"attr.validators", modulecode_attr$validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/attr/validators.py"
#endif
},
    {"bdb", NULL, 29, 25645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/bdb.py"
#endif
},
    {"bs4", modulecode_bs4, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/__init__.py"
#endif
},
    {"bs4.builder", modulecode_bs4$builder, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/builder/__init__.py"
#endif
},
    {"bs4.builder._html5lib", modulecode_bs4$builder$_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/builder/_html5lib.py"
#endif
},
    {"bs4.builder._htmlparser", modulecode_bs4$builder$_htmlparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/builder/_htmlparser.py"
#endif
},
    {"bs4.builder._lxml", modulecode_bs4$builder$_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/builder/_lxml.py"
#endif
},
    {"bs4.dammit", modulecode_bs4$dammit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/dammit.py"
#endif
},
    {"bs4.element", modulecode_bs4$element, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/element.py"
#endif
},
    {"bs4.formatter", modulecode_bs4$formatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/bs4/formatter.py"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/certifi/__init__.py"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/certifi/core.py"
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/__init__.py"
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/api.py"
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/commontypes.py"
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/cparser.py"
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/error.py"
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/ffiplatform.py"
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/lock.py"
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/model.py"
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/pkgconfig.py"
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/vengine_cpy.py"
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/vengine_gen.py"
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/cffi/verifier.py"
#endif
},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/__init__.py"
#endif
},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/api.py"
#endif
},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/assets/__init__.py"
#endif
},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/cd.py"
#endif
},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/constant.py"
#endif
},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/legacy.py"
#endif
},
    {"charset_normalizer.md", modulecode_charset_normalizer$md, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/md.py"
#endif
},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/models.py"
#endif
},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/utils.py"
#endif
},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/charset_normalizer/version.py"
#endif
},
    {"click", modulecode_click, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/__init__.py"
#endif
},
    {"click._compat", modulecode_click$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/_compat.py"
#endif
},
    {"click._termui_impl", modulecode_click$_termui_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/_termui_impl.py"
#endif
},
    {"click._textwrap", modulecode_click$_textwrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/_textwrap.py"
#endif
},
    {"click.core", modulecode_click$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/core.py"
#endif
},
    {"click.decorators", modulecode_click$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/decorators.py"
#endif
},
    {"click.exceptions", modulecode_click$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/exceptions.py"
#endif
},
    {"click.formatting", modulecode_click$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/formatting.py"
#endif
},
    {"click.globals", modulecode_click$globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/globals.py"
#endif
},
    {"click.parser", modulecode_click$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/parser.py"
#endif
},
    {"click.shell_completion", modulecode_click$shell_completion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/shell_completion.py"
#endif
},
    {"click.termui", modulecode_click$termui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/termui.py"
#endif
},
    {"click.types", modulecode_click$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/types.py"
#endif
},
    {"click.utils", modulecode_click$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/click/utils.py"
#endif
},
    {"concurrent", NULL, 30, 198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/concurrent/__init__.py"
#endif
},
    {"concurrent.futures", NULL, 31, 1170, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/concurrent/futures/__init__.py"
#endif
},
    {"concurrent.futures._base", NULL, 32, 22290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/concurrent/futures/_base.py"
#endif
},
    {"concurrent.futures.process", NULL, 33, 21810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/concurrent/futures/process.py"
#endif
},
    {"concurrent.futures.thread", NULL, 34, 6028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/concurrent/futures/thread.py"
#endif
},
    {"doctest", NULL, 35, 76240, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/doctest.py"
#endif
},
    {"email", NULL, 36, 1623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/__init__.py"
#endif
},
    {"email._encoded_words", NULL, 37, 5803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/_encoded_words.py"
#endif
},
    {"email._header_value_parser", NULL, 38, 77874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/_header_value_parser.py"
#endif
},
    {"email._parseaddr", NULL, 39, 12575, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/_parseaddr.py"
#endif
},
    {"email._policybase", NULL, 40, 14845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/_policybase.py"
#endif
},
    {"email.base64mime", NULL, 41, 3303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/base64mime.py"
#endif
},
    {"email.charset", NULL, 42, 11638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/charset.py"
#endif
},
    {"email.contentmanager", NULL, 43, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/contentmanager.py"
#endif
},
    {"email.encoders", NULL, 44, 1690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/encoders.py"
#endif
},
    {"email.errors", NULL, 45, 5765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/errors.py"
#endif
},
    {"email.feedparser", NULL, 46, 10641, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/feedparser.py"
#endif
},
    {"email.generator", NULL, 47, 12664, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/generator.py"
#endif
},
    {"email.header", NULL, 48, 16525, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/header.py"
#endif
},
    {"email.headerregistry", NULL, 49, 21968, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/headerregistry.py"
#endif
},
    {"email.iterators", NULL, 50, 2031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/iterators.py"
#endif
},
    {"email.message", NULL, 51, 37871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/message.py"
#endif
},
    {"email.parser", NULL, 52, 5736, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/parser.py"
#endif
},
    {"email.policy", NULL, 53, 9716, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/policy.py"
#endif
},
    {"email.quoprimime", NULL, 54, 7686, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/quoprimime.py"
#endif
},
    {"email.utils", NULL, 55, 9749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/email/utils.py"
#endif
},
    {"exceptiongroup", modulecode_exceptiongroup, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/exceptiongroup/__init__.py"
#endif
},
    {"exceptiongroup._catch", modulecode_exceptiongroup$_catch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/exceptiongroup/_catch.py"
#endif
},
    {"exceptiongroup._exceptions", modulecode_exceptiongroup$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/exceptiongroup/_exceptions.py"
#endif
},
    {"exceptiongroup._formatting", modulecode_exceptiongroup$_formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/exceptiongroup/_formatting.py"
#endif
},
    {"exceptiongroup._version", modulecode_exceptiongroup$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/exceptiongroup/_version.py"
#endif
},
    {"html5lib", modulecode_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/__init__.py"
#endif
},
    {"html5lib._ihatexml", modulecode_html5lib$_ihatexml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_ihatexml.py"
#endif
},
    {"html5lib._inputstream", modulecode_html5lib$_inputstream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_inputstream.py"
#endif
},
    {"html5lib._tokenizer", modulecode_html5lib$_tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_tokenizer.py"
#endif
},
    {"html5lib._trie", modulecode_html5lib$_trie, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_trie/__init__.py"
#endif
},
    {"html5lib._trie._base", modulecode_html5lib$_trie$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_trie/_base.py"
#endif
},
    {"html5lib._trie.py", modulecode_html5lib$_trie$py, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_trie/py.py"
#endif
},
    {"html5lib._utils", modulecode_html5lib$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/_utils.py"
#endif
},
    {"html5lib.constants", modulecode_html5lib$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/constants.py"
#endif
},
    {"html5lib.filters", modulecode_html5lib$filters, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/__init__.py"
#endif
},
    {"html5lib.filters.alphabeticalattributes", modulecode_html5lib$filters$alphabeticalattributes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/alphabeticalattributes.py"
#endif
},
    {"html5lib.filters.base", modulecode_html5lib$filters$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/base.py"
#endif
},
    {"html5lib.filters.inject_meta_charset", modulecode_html5lib$filters$inject_meta_charset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/inject_meta_charset.py"
#endif
},
    {"html5lib.filters.optionaltags", modulecode_html5lib$filters$optionaltags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/optionaltags.py"
#endif
},
    {"html5lib.filters.sanitizer", modulecode_html5lib$filters$sanitizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/sanitizer.py"
#endif
},
    {"html5lib.filters.whitespace", modulecode_html5lib$filters$whitespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/filters/whitespace.py"
#endif
},
    {"html5lib.html5parser", modulecode_html5lib$html5parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/html5parser.py"
#endif
},
    {"html5lib.serializer", modulecode_html5lib$serializer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/serializer.py"
#endif
},
    {"html5lib.treebuilders", modulecode_html5lib$treebuilders, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treebuilders/__init__.py"
#endif
},
    {"html5lib.treebuilders.base", modulecode_html5lib$treebuilders$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treebuilders/base.py"
#endif
},
    {"html5lib.treebuilders.dom", modulecode_html5lib$treebuilders$dom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treebuilders/dom.py"
#endif
},
    {"html5lib.treebuilders.etree", modulecode_html5lib$treebuilders$etree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treebuilders/etree.py"
#endif
},
    {"html5lib.treebuilders.etree_lxml", modulecode_html5lib$treebuilders$etree_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treebuilders/etree_lxml.py"
#endif
},
    {"html5lib.treewalkers", modulecode_html5lib$treewalkers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/__init__.py"
#endif
},
    {"html5lib.treewalkers.base", modulecode_html5lib$treewalkers$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/base.py"
#endif
},
    {"html5lib.treewalkers.dom", modulecode_html5lib$treewalkers$dom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/dom.py"
#endif
},
    {"html5lib.treewalkers.etree", modulecode_html5lib$treewalkers$etree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/etree.py"
#endif
},
    {"html5lib.treewalkers.etree_lxml", modulecode_html5lib$treewalkers$etree_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/etree_lxml.py"
#endif
},
    {"html5lib.treewalkers.genshi", modulecode_html5lib$treewalkers$genshi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/html5lib/treewalkers/genshi.py"
#endif
},
    {"http", NULL, 56, 6479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/__init__.py"
#endif
},
    {"http.client", NULL, 57, 35186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py"
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/__init__.py"
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/core.py"
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/idnadata.py"
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/intranges.py"
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/package_data.py"
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/idna/uts46data.py"
#endif
},
    {"lxml", modulecode_lxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/__init__.py"
#endif
},
    {"lxml.ElementInclude", modulecode_lxml$ElementInclude, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/ElementInclude.py"
#endif
},
    {"lxml._elementpath", modulecode_lxml$_elementpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/_elementpath.py"
#endif
},
    {"lxml.builder", modulecode_lxml$builder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/builder.py"
#endif
},
    {"lxml.cssselect", modulecode_lxml$cssselect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/cssselect.py"
#endif
},
    {"lxml.doctestcompare", modulecode_lxml$doctestcompare, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/doctestcompare.py"
#endif
},
    {"lxml.html", modulecode_lxml$html, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/__init__.py"
#endif
},
    {"lxml.html.ElementSoup", modulecode_lxml$html$ElementSoup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/ElementSoup.py"
#endif
},
    {"lxml.html._diffcommand", modulecode_lxml$html$_diffcommand, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/_diffcommand.py"
#endif
},
    {"lxml.html._html5builder", modulecode_lxml$html$_html5builder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/_html5builder.py"
#endif
},
    {"lxml.html._setmixin", modulecode_lxml$html$_setmixin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/_setmixin.py"
#endif
},
    {"lxml.html.builder", modulecode_lxml$html$builder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/builder.py"
#endif
},
    {"lxml.html.clean", modulecode_lxml$html$clean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/clean.py"
#endif
},
    {"lxml.html.defs", modulecode_lxml$html$defs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/defs.py"
#endif
},
    {"lxml.html.diff", modulecode_lxml$html$diff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/diff.py"
#endif
},
    {"lxml.html.formfill", modulecode_lxml$html$formfill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/formfill.py"
#endif
},
    {"lxml.html.html5parser", modulecode_lxml$html$html5parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/html5parser.py"
#endif
},
    {"lxml.html.soupparser", modulecode_lxml$html$soupparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/soupparser.py"
#endif
},
    {"lxml.html.usedoctest", modulecode_lxml$html$usedoctest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/html/usedoctest.py"
#endif
},
    {"lxml.includes", modulecode_lxml$includes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/includes/__init__.py"
#endif
},
    {"lxml.isoschematron", modulecode_lxml$isoschematron, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/isoschematron/__init__.py"
#endif
},
    {"lxml.pyclasslookup", modulecode_lxml$pyclasslookup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/pyclasslookup.py"
#endif
},
    {"lxml.sax", modulecode_lxml$sax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/sax.py"
#endif
},
    {"lxml.usedoctest", modulecode_lxml$usedoctest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/lxml/usedoctest.py"
#endif
},
    {"multiprocessing", NULL, 58, 732, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/__init__.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/multiprocessing-preLoad.py"
#endif
},
    {"multiprocessing.connection", NULL, 59, 25716, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 60, 12917, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 61, 3931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 62, 2631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 63, 8489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 64, 7731, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 65, 40827, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 66, 25267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 67, 2584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 68, 2529, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 69, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 70, 11325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 71, 10348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 72, 8362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 73, 5364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 74, 5586, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 75, 14498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 76, 7163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 77, 6802, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 78, 11390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 79, 11560, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/multiprocessing/util.py"
#endif
},
    {"optparse", NULL, 80, 47817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/optparse.py"
#endif
},
    {"outcome", modulecode_outcome, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/outcome/__init__.py"
#endif
},
    {"outcome._impl", modulecode_outcome$_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/outcome/_impl.py"
#endif
},
    {"outcome._util", modulecode_outcome$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/outcome/_util.py"
#endif
},
    {"outcome._version", modulecode_outcome$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/outcome/_version.py"
#endif
},
    {"pdb", NULL, 81, 47671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/pdb.py"
#endif
},
    {"pycparser", NULL, 82, 2480, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/__init__.py"
#endif
},
    {"pycparser.ast_transforms", NULL, 83, 3743, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/ast_transforms.py"
#endif
},
    {"pycparser.c_ast", NULL, 84, 29500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/c_ast.py"
#endif
},
    {"pycparser.c_lexer", NULL, 85, 12901, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/c_lexer.py"
#endif
},
    {"pycparser.c_parser", NULL, 86, 62904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/c_parser.py"
#endif
},
    {"pycparser.lextab", NULL, 87, 6577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/lextab.py"
#endif
},
    {"pycparser.ply", NULL, 88, 194, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/ply/__init__.py"
#endif
},
    {"pycparser.ply.lex", NULL, 89, 21362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/ply/lex.py"
#endif
},
    {"pycparser.ply.yacc", NULL, 90, 52619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/ply/yacc.py"
#endif
},
    {"pycparser.plyparser", NULL, 91, 4653, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/plyparser.py"
#endif
},
    {"pycparser.yacctab", NULL, 92, 177068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pycparser/yacctab.py"
#endif
},
    {"pyee", modulecode_pyee, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/__init__.py"
#endif
},
    {"pyee._asyncio", modulecode_pyee$_asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/_asyncio.py"
#endif
},
    {"pyee._base", modulecode_pyee$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/_base.py"
#endif
},
    {"pyee._executor", modulecode_pyee$_executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/_executor.py"
#endif
},
    {"pyee._trio", modulecode_pyee$_trio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/_trio.py"
#endif
},
    {"pyee._twisted", modulecode_pyee$_twisted, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyee/_twisted.py"
#endif
},
    {"pyppeteer", modulecode_pyppeteer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/__init__.py"
#endif
},
    {"pyppeteer.browser", modulecode_pyppeteer$browser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/browser.py"
#endif
},
    {"pyppeteer.chromium_downloader", modulecode_pyppeteer$chromium_downloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/chromium_downloader.py"
#endif
},
    {"pyppeteer.connection", modulecode_pyppeteer$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/connection.py"
#endif
},
    {"pyppeteer.coverage", modulecode_pyppeteer$coverage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/coverage.py"
#endif
},
    {"pyppeteer.dialog", modulecode_pyppeteer$dialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/dialog.py"
#endif
},
    {"pyppeteer.element_handle", modulecode_pyppeteer$element_handle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/element_handle.py"
#endif
},
    {"pyppeteer.emulation_manager", modulecode_pyppeteer$emulation_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/emulation_manager.py"
#endif
},
    {"pyppeteer.errors", modulecode_pyppeteer$errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/errors.py"
#endif
},
    {"pyppeteer.execution_context", modulecode_pyppeteer$execution_context, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/execution_context.py"
#endif
},
    {"pyppeteer.frame_manager", modulecode_pyppeteer$frame_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/frame_manager.py"
#endif
},
    {"pyppeteer.helper", modulecode_pyppeteer$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/helper.py"
#endif
},
    {"pyppeteer.input", modulecode_pyppeteer$input, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/input.py"
#endif
},
    {"pyppeteer.launcher", modulecode_pyppeteer$launcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/launcher.py"
#endif
},
    {"pyppeteer.multimap", modulecode_pyppeteer$multimap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/multimap.py"
#endif
},
    {"pyppeteer.navigator_watcher", modulecode_pyppeteer$navigator_watcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/navigator_watcher.py"
#endif
},
    {"pyppeteer.network_manager", modulecode_pyppeteer$network_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/network_manager.py"
#endif
},
    {"pyppeteer.page", modulecode_pyppeteer$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/page.py"
#endif
},
    {"pyppeteer.target", modulecode_pyppeteer$target, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/target.py"
#endif
},
    {"pyppeteer.tracing", modulecode_pyppeteer$tracing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/tracing.py"
#endif
},
    {"pyppeteer.us_keyboard_layout", modulecode_pyppeteer$us_keyboard_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/us_keyboard_layout.py"
#endif
},
    {"pyppeteer.util", modulecode_pyppeteer$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/util.py"
#endif
},
    {"pyppeteer.worker", modulecode_pyppeteer$worker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/pyppeteer/worker.py"
#endif
},
    {"runpy", NULL, 93, 9474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/runpy.py"
#endif
},
    {"site", NULL, 94, 17443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/site.py"
#endif
},
    {"sitecustomize", NULL, 95, 1962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/sitecustomize.py"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/six.py"
#endif
},
    {"sniffio", modulecode_sniffio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sniffio/__init__.py"
#endif
},
    {"sniffio._impl", modulecode_sniffio$_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sniffio/_impl.py"
#endif
},
    {"sniffio._version", modulecode_sniffio$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sniffio/_version.py"
#endif
},
    {"sortedcontainers", modulecode_sortedcontainers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sortedcontainers/__init__.py"
#endif
},
    {"sortedcontainers.sorteddict", modulecode_sortedcontainers$sorteddict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sortedcontainers/sorteddict.py"
#endif
},
    {"sortedcontainers.sortedlist", modulecode_sortedcontainers$sortedlist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sortedcontainers/sortedlist.py"
#endif
},
    {"sortedcontainers.sortedset", modulecode_sortedcontainers$sortedset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/sortedcontainers/sortedset.py"
#endif
},
    {"soupsieve", modulecode_soupsieve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/__init__.py"
#endif
},
    {"soupsieve.__meta__", modulecode_soupsieve$__meta__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/__meta__.py"
#endif
},
    {"soupsieve.css_match", modulecode_soupsieve$css_match, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/css_match.py"
#endif
},
    {"soupsieve.css_parser", modulecode_soupsieve$css_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/css_parser.py"
#endif
},
    {"soupsieve.css_types", modulecode_soupsieve$css_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/css_types.py"
#endif
},
    {"soupsieve.pretty", modulecode_soupsieve$pretty, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/pretty.py"
#endif
},
    {"soupsieve.util", modulecode_soupsieve$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/soupsieve/util.py"
#endif
},
    {"tqdm", modulecode_tqdm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/__init__.py"
#endif
},
    {"tqdm._dist_ver", modulecode_tqdm$_dist_ver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/_dist_ver.py"
#endif
},
    {"tqdm._monitor", modulecode_tqdm$_monitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/_monitor.py"
#endif
},
    {"tqdm._tqdm_pandas", modulecode_tqdm$_tqdm_pandas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/_tqdm_pandas.py"
#endif
},
    {"tqdm.cli", modulecode_tqdm$cli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/cli.py"
#endif
},
    {"tqdm.gui", modulecode_tqdm$gui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/gui.py"
#endif
},
    {"tqdm.std", modulecode_tqdm$std, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/std.py"
#endif
},
    {"tqdm.utils", modulecode_tqdm$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/utils.py"
#endif
},
    {"tqdm.version", modulecode_tqdm$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/tqdm/version.py"
#endif
},
    {"tr", modulecode_tr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/Users/qwerzl/Documents/Python Projects/ScrapeL/tr.py"
#endif
},
    {"trio", modulecode_trio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/__init__.py"
#endif
},
    {"trio._abc", modulecode_trio$_abc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_abc.py"
#endif
},
    {"trio._channel", modulecode_trio$_channel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_channel.py"
#endif
},
    {"trio._core", modulecode_trio$_core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/__init__.py"
#endif
},
    {"trio._core._asyncgens", modulecode_trio$_core$_asyncgens, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_asyncgens.py"
#endif
},
    {"trio._core._entry_queue", modulecode_trio$_core$_entry_queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_entry_queue.py"
#endif
},
    {"trio._core._exceptions", modulecode_trio$_core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_exceptions.py"
#endif
},
    {"trio._core._generated_instrumentation", modulecode_trio$_core$_generated_instrumentation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_generated_instrumentation.py"
#endif
},
    {"trio._core._generated_io_epoll", modulecode_trio$_core$_generated_io_epoll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_generated_io_epoll.py"
#endif
},
    {"trio._core._generated_io_kqueue", modulecode_trio$_core$_generated_io_kqueue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_generated_io_kqueue.py"
#endif
},
    {"trio._core._generated_run", modulecode_trio$_core$_generated_run, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_generated_run.py"
#endif
},
    {"trio._core._instrumentation", modulecode_trio$_core$_instrumentation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_instrumentation.py"
#endif
},
    {"trio._core._io_common", modulecode_trio$_core$_io_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_io_common.py"
#endif
},
    {"trio._core._io_epoll", modulecode_trio$_core$_io_epoll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_io_epoll.py"
#endif
},
    {"trio._core._io_kqueue", modulecode_trio$_core$_io_kqueue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_io_kqueue.py"
#endif
},
    {"trio._core._ki", modulecode_trio$_core$_ki, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_ki.py"
#endif
},
    {"trio._core._local", modulecode_trio$_core$_local, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_local.py"
#endif
},
    {"trio._core._mock_clock", modulecode_trio$_core$_mock_clock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_mock_clock.py"
#endif
},
    {"trio._core._multierror", modulecode_trio$_core$_multierror, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_multierror.py"
#endif
},
    {"trio._core._parking_lot", modulecode_trio$_core$_parking_lot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_parking_lot.py"
#endif
},
    {"trio._core._run", modulecode_trio$_core$_run, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_run.py"
#endif
},
    {"trio._core._thread_cache", modulecode_trio$_core$_thread_cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_thread_cache.py"
#endif
},
    {"trio._core._traps", modulecode_trio$_core$_traps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_traps.py"
#endif
},
    {"trio._core._unbounded_queue", modulecode_trio$_core$_unbounded_queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_unbounded_queue.py"
#endif
},
    {"trio._core._wakeup_socketpair", modulecode_trio$_core$_wakeup_socketpair, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_core/_wakeup_socketpair.py"
#endif
},
    {"trio._deprecate", modulecode_trio$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_deprecate.py"
#endif
},
    {"trio._dtls", modulecode_trio$_dtls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_dtls.py"
#endif
},
    {"trio._file_io", modulecode_trio$_file_io, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_file_io.py"
#endif
},
    {"trio._highlevel_generic", modulecode_trio$_highlevel_generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_generic.py"
#endif
},
    {"trio._highlevel_open_tcp_listeners", modulecode_trio$_highlevel_open_tcp_listeners, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_open_tcp_listeners.py"
#endif
},
    {"trio._highlevel_open_tcp_stream", modulecode_trio$_highlevel_open_tcp_stream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_open_tcp_stream.py"
#endif
},
    {"trio._highlevel_open_unix_stream", modulecode_trio$_highlevel_open_unix_stream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_open_unix_stream.py"
#endif
},
    {"trio._highlevel_serve_listeners", modulecode_trio$_highlevel_serve_listeners, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_serve_listeners.py"
#endif
},
    {"trio._highlevel_socket", modulecode_trio$_highlevel_socket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_socket.py"
#endif
},
    {"trio._highlevel_ssl_helpers", modulecode_trio$_highlevel_ssl_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_highlevel_ssl_helpers.py"
#endif
},
    {"trio._path", modulecode_trio$_path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_path.py"
#endif
},
    {"trio._signals", modulecode_trio$_signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_signals.py"
#endif
},
    {"trio._socket", modulecode_trio$_socket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_socket.py"
#endif
},
    {"trio._ssl", modulecode_trio$_ssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_ssl.py"
#endif
},
    {"trio._subprocess", modulecode_trio$_subprocess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_subprocess.py"
#endif
},
    {"trio._subprocess_platform", modulecode_trio$_subprocess_platform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_subprocess_platform/__init__.py"
#endif
},
    {"trio._subprocess_platform.kqueue", modulecode_trio$_subprocess_platform$kqueue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_subprocess_platform/kqueue.py"
#endif
},
    {"trio._subprocess_platform.waitid", modulecode_trio$_subprocess_platform$waitid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_subprocess_platform/waitid.py"
#endif
},
    {"trio._sync", modulecode_trio$_sync, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_sync.py"
#endif
},
    {"trio._threads", modulecode_trio$_threads, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_threads.py"
#endif
},
    {"trio._timeouts", modulecode_trio$_timeouts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_timeouts.py"
#endif
},
    {"trio._unix_pipes", modulecode_trio$_unix_pipes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_unix_pipes.py"
#endif
},
    {"trio._util", modulecode_trio$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_util.py"
#endif
},
    {"trio._version", modulecode_trio$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/_version.py"
#endif
},
    {"trio.abc", modulecode_trio$abc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/abc.py"
#endif
},
    {"trio.from_thread", modulecode_trio$from_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/from_thread.py"
#endif
},
    {"trio.lowlevel", modulecode_trio$lowlevel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/lowlevel.py"
#endif
},
    {"trio.socket", modulecode_trio$socket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/socket.py"
#endif
},
    {"trio.to_thread", modulecode_trio$to_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/trio/to_thread.py"
#endif
},
    {"unittest", NULL, 96, 3458, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/__init__.py"
#endif
},
    {"unittest._log", NULL, 97, 2751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/_log.py"
#endif
},
    {"unittest.async_case", NULL, 98, 4809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/async_case.py"
#endif
},
    {"unittest.case", NULL, 99, 48368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/case.py"
#endif
},
    {"unittest.loader", NULL, 100, 14489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/loader.py"
#endif
},
    {"unittest.main", NULL, 101, 7619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/main.py"
#endif
},
    {"unittest.result", NULL, 102, 8047, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/result.py"
#endif
},
    {"unittest.runner", NULL, 103, 7015, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/runner.py"
#endif
},
    {"unittest.signals", NULL, 104, 2316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/signals.py"
#endif
},
    {"unittest.suite", NULL, 105, 10331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/suite.py"
#endif
},
    {"unittest.util", NULL, 106, 4603, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/Cellar/python@3.10/3.10.6_2/Frameworks/Python.framework/Versions/3.10/lib/python3.10/unittest/util.py"
#endif
},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/__init__.py"
#endif
},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/_collections.py"
#endif
},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/_version.py"
#endif
},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/connection.py"
#endif
},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/connectionpool.py"
#endif
},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/contrib/__init__.py"
#endif
},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/contrib/_appengine_environ.py"
#endif
},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/contrib/appengine.py"
#endif
},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/exceptions.py"
#endif
},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/fields.py"
#endif
},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/filepost.py"
#endif
},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/packages/__init__.py"
#endif
},
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/packages/six.py"
#endif
},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/poolmanager.py"
#endif
},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/request.py"
#endif
},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/response.py"
#endif
},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/__init__.py"
#endif
},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/connection.py"
#endif
},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/proxy.py"
#endif
},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/queue.py"
#endif
},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/request.py"
#endif
},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/response.py"
#endif
},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/retry.py"
#endif
},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/ssl_.py"
#endif
},
    {"urllib3.util.ssl_match_hostname", modulecode_urllib3$util$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/ssl_match_hostname.py"
#endif
},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/ssltransport.py"
#endif
},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/timeout.py"
#endif
},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/url.py"
#endif
},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/urllib3/util/wait.py"
#endif
},
    {"webencodings", modulecode_webencodings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/webencodings/__init__.py"
#endif
},
    {"webencodings.labels", modulecode_webencodings$labels, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/webencodings/labels.py"
#endif
},
    {"webencodings.x_user_defined", modulecode_webencodings$x_user_defined, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/webencodings/x_user_defined.py"
#endif
},
    {"websockets", modulecode_websockets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/__init__.py"
#endif
},
    {"websockets.connection", modulecode_websockets$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/connection.py"
#endif
},
    {"websockets.datastructures", modulecode_websockets$datastructures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/datastructures.py"
#endif
},
    {"websockets.exceptions", modulecode_websockets$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/exceptions.py"
#endif
},
    {"websockets.extensions", modulecode_websockets$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/extensions/__init__.py"
#endif
},
    {"websockets.extensions.base", modulecode_websockets$extensions$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/extensions/base.py"
#endif
},
    {"websockets.extensions.permessage_deflate", modulecode_websockets$extensions$permessage_deflate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/extensions/permessage_deflate.py"
#endif
},
    {"websockets.frames", modulecode_websockets$frames, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/frames.py"
#endif
},
    {"websockets.headers", modulecode_websockets$headers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/headers.py"
#endif
},
    {"websockets.http", modulecode_websockets$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/http.py"
#endif
},
    {"websockets.http11", modulecode_websockets$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/http11.py"
#endif
},
    {"websockets.imports", modulecode_websockets$imports, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/imports.py"
#endif
},
    {"websockets.legacy", modulecode_websockets$legacy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/__init__.py"
#endif
},
    {"websockets.legacy.client", modulecode_websockets$legacy$client, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/client.py"
#endif
},
    {"websockets.legacy.compatibility", modulecode_websockets$legacy$compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/compatibility.py"
#endif
},
    {"websockets.legacy.framing", modulecode_websockets$legacy$framing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/framing.py"
#endif
},
    {"websockets.legacy.handshake", modulecode_websockets$legacy$handshake, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/handshake.py"
#endif
},
    {"websockets.legacy.http", modulecode_websockets$legacy$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/http.py"
#endif
},
    {"websockets.legacy.protocol", modulecode_websockets$legacy$protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/legacy/protocol.py"
#endif
},
    {"websockets.streams", modulecode_websockets$streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/streams.py"
#endif
},
    {"websockets.typing", modulecode_websockets$typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/typing.py"
#endif
},
    {"websockets.uri", modulecode_websockets$uri, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/uri.py"
#endif
},
    {"websockets.utils", modulecode_websockets$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/utils.py"
#endif
},
    {"websockets.version", modulecode_websockets$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/opt/homebrew/lib/python3.10/site-packages/websockets/version.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

