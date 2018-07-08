(() => {
  const { PerfectScrollbar, ScrollReveal } = window;

  const sr = ScrollReveal();

  const $scrollTop = $('#js-scroll-top');
  const $topElement = $('#js-top-element');

  $(window).scroll(function () {
    const $this = $(this);
    if ($this.scrollTop() > 800) {
      $scrollTop.fadeIn();
    } else {
      $scrollTop.fadeOut();
    }
  });

  $scrollTop.click(() => {
    $('html, body').animate({
      scrollTop: $topElement.offset().top
    }, 500);
  });

  const revealElementsOnScroll = () => {
    sr.reveal('.js-reveal', {
      duration: 1000,
      delay: 300
    });
  };

  revealElementsOnScroll();

})();
