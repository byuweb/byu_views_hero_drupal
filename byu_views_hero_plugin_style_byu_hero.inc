<?php

/**
 * Class byu_views_hero_plugin_style_byu_hero
 */

class byu_views_hero_plugin_style_byu_hero extends views_plugin_style {

  /**
   * @return array
   */

  function option_definition() {
    $options = parent::option_definition();
    $options['banner_style'] = ['default' => 'title-only'];
    $options['style_2'] = ['default' => ''];
    $options['overlay_align'] = ['default' => ''];
    $options['image_brightness'] = ['default' => 'light-image'];
    $options['title'] = ['default' => ''];
    $options['intro_text'] = ['default' => ''];
    $options['image'] = ['default' => ''];
    $options['video_url'] = ['default' => ''];
    $options['read_more_link'] = ['default' => ''];

    return $options;
  }

  /**
   * @param $form
   * @param $form_state
   * @return array
   */

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $options = byu_views_hero_get_options($this->options);

    $fields = array('' => t('<None>'));

    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $label;
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

    $form['banner_style'] = [
      '#type' => 'select',
      '#title' => t('Style'),
      '#default_value' => $options['banner_style'],
      '#required' => TRUE,
      '#options' => [
        'title-only' => t('Title Only'),
        'video-hero' => t('Video Hero'),
        'side-image' => t('Side Image'),
        'transparent-overlay' => t('Transparent Overlay'),
        'full-screen' => t('Full Screen'),
      ]
    ];

    // Option for video support in side image

    $form['style_2'] = [
      '#type' => 'checkbox',
      '#title' => 'Enable Video Support (Side Image Only)',
    ];

    // Alignment option for transparent overlay

    $form['overlay_align'] = [
      '#type' => 'select',
      '#title' => t('Overlay Alignment (Transparent Overlay Only)'),
      '#default_value' => $options['overlay_align'],
      '#options' => [
        null => t('Left Aligned'),
        'byu-hero-right' => t('Right Aligned')
      ],
    ];

    // Image brightness options for full screen

    $form['image_brightness'] = [
      '#type' => 'select',
      '#title' => t('Image Brightness (Full Screen Only)'),
      '#default_value' => $options['image_brightness'],
      '#options' => [
        'light-image' => t('Light Image'),
        'dark-image' => t('Dark Image'),
      ],
    ];

    // Title field

    $form['title'] = [
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => $fields,
      '#default_value' => $this->options['title'],
      '#description' => 'Select the field for the banner\'s title.',
      '#multiple' => TRUE,
      '#required' => TRUE,
    ];

    // Body field

    $form['intro_text'] = [
      '#type' => 'select',
      '#title' => t('Intro Text'),
      '#options' => $fields,
      '#default_value' => $this->options['intro_text'],
      '#description' => 'Select the field for the banner\'s intro text.',
      '#multiple' => TRUE,
      '#required' => TRUE,
    ];

    // Image field

    $form ['image'] = [
      '#type' => 'select',
      '#title' => t('Image'),
      '#options' => $fields,
      '#default_value' => $this->options['image'],
      '#description' => 'Select the field for the banner\'s image source.',
      '#multiple' => TRUE,
      '#required' => TRUE,
    ];

    // Video URL field

    $form['video_url'] = [
      '#type' => 'select',
      '#title' => t('Video URL'),
      '#options' => $fields,
      '#default_value' => $this->options['video_url'],
      '#description' => 'Select the field for the banner\'s video source.',
      '#multiple' => TRUE,
      '#required' => TRUE,
    ];

    // Read More Link

    $form['read_more_link'] = [
      '#type' => 'select',
      '#title' => t('Read More Link'),
      '#options' => $fields,
      '#default_value' => $this->options['read_more_link'],
      '#description' => 'Select the field for the banner\'s reade more link.',
      '#multiple' => TRUE,
      '#required' => TRUE,
    ];

    return $form;
  }
}