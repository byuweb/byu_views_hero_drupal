<byu-hero-banner class="byu-component-rendered <?php print $hero_classes; ?>
" image-source="<?php print $image; ?>" video-source="<?php print $video_url; ?>">
  <span slot="headline"><?php print $title; ?></span>
  <?php if (strpos($hero_classes, 'title-only') === FALSE) : ?>
  <span slot="intro-text"><?php print $intro_text; ?></span>
  <a slot="read-more" href="<?php print $read_more_link;?>"><?php print $read_more_title;?></a>
  <?php endif; ?>
</byu-hero-banner>