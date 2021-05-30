(() => {

  function tocElement(toc, idx, e) {
    var style = e.tagName;
    var ee = $(e);
    var name = ee.attr('id') ? ee.attr('id') : `toc-tgt-${idx}`;
    ee.attr('id', name);
    var span = `<div class="toc-${style}"><a href="${
      window.location.href.replace(/#.*/, '')}#${
      name}">${ee.text()}<a/></div>`;
    toc.append(span);
  }

  function tableOfContent() {
    var parts = $('h2,h3');
    var title = $('h1:first');
    if (parts.size() < 1 || title.size() < 1 || title.attr('data-toc') == 'off') {
      return;
    }
    var toc = $('<div id="toc"><strong>Table of Contents</strong><br/></div>')
      .insertAfter('h1:first');
    parts.each((i, e) => { tocElement(toc, i, e); });
  }

  tableOfContent();

})();
