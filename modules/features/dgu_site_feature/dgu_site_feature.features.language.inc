<?php
/**
 * @file
 * dgu_site_feature.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function dgu_site_feature_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -9,
  );
  // Exported language: et.
  $languages['et'] = array(
    'language' => 'et',
    'name' => 'Estonian',
    'native' => 'Eesti',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'et',
    'weight' => -10,
  );
  return $languages;
}
