(() => {
  const { Prism, copyToClipboard } = window;

  // map source code by language
  const sourceCode = {};

  // loop by source (language)
  $('.js-single-src').each(function () {
    const $src = $(this);
    const filename = $src.children('.js-filename-code').attr('value');
    let lang = 'cpp'; // default is `cpp`
    if (filename && filename.split('.').length > 0) {
      lang = filename.split('.')[1];
    }

    // fetch source from github
    $.ajax({
      url: `https://vnspoj.github.io/solution/src/${filename}`,
      dataType: 'text',
    })
      .done((code) => {
        sourceCode[lang] = code; // store source
        const highlightCode = Prism.highlight(code, Prism.languages[lang]);
        $src
          .find('.js-source-code')
          .addClass(`language-${lang}`)
          .html(highlightCode);
      })
      .fail(function (err) {
        console.log(err);
      });

    // toggle visibility
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

    // copy to clipboard
    $src.find('.js-copy-code').click(function () {
      const source = sourceCode[lang] || '';
      copyToClipboard(source);
    });
  });
})();
