(() => {
  const { Prism, PerfectScrollbar } = window;

  $('.js-area-code > pre').each(function () {
    const ps = new PerfectScrollbar($(this)[0], {
      wheelSpeed: 1.2
    });
  });

  $('.js-single-src').each(function () {
    const $src = $(this);
    const filename = $src.children('.js-filename-code').attr('value');
    let lang = 'cpp';
    if (filename && filename.split('.').length > 0) {
      lang = filename.split('.')[1];
    }

    $.get(`https://vnspoj.github.io/solution/src/${filename}`, (code) => {
      const highlightCode = Prism.highlight(code, Prism.languages[lang]);
      $src.find('.js-source-code')
        .addClass(`language-${lang}`)
        .html(highlightCode);
    });

    $src.find('.js-toggle-code').click(function () {
      $src.children('.js-area-code').slideToggle(500, 'linear');
      const $this = $(this);
      if ($this.attr('data-visible') == '1') {
        $this.attr('data-visible', '0');
        $this.children('span.text').text('Show');
        $this.children('i.fa').removeClass('fa-eye-slash').addClass('fa-eye');
      } else {
        $this.attr('data-visible', '1');
        $this.children('span.text').text('Hide');
        $this.children('i.fa').removeClass('fa-eye').addClass('fa-eye-slash');
      }
    });
  });

})();
