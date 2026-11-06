# ---docerion
# type: script
# title: Makefile building the accessibility figure PNGs
# summary: Builds all PNG figures in this folder from the Graphviz .gv sources using the dot tool.
# relations:
#   - references /docs/accessibility/browser/figures/ax_tree.png
#   - references /docs/accessibility/browser/figures/generated_content.png
#   - references /docs/accessibility/browser/figures/hidden_content.png
# ---

all: \
	ax_tree.png \
	generated_content.png \
	hidden_content.png \
	cover_flow.png \
	single_process.png \
	single_process_css_system.png \
	single_process_system.png \
	multi_process_browser.png \
	multi_process_multiple_tabs.png \
	other_multi_process_browser.png \
	proxy_approach.png \
	caching_approach.png \
	multi_process_ax.png \
	focus_race.png

%.png: %.gv Makefile
	dot -Tpng $< -o $@
