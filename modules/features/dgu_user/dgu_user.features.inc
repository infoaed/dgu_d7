<?php
/**
 * @file
 * dgu_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgu_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dgu_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dgu_user_image_default_styles() {
  $styles = array();

  // Exported image style: avatar.
  $styles['avatar'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'avatar',
  );

  // Exported image style: avatar_big.
  $styles['avatar_big'] = array(
    'label' => 'avatar_big',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: avatar_small.
  $styles['avatar_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'avatar_small',
  );

  return $styles;
}
