<?php
/**
 * @file
 * dgu_site_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dgu_site_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_data:data.
  $menu_links['main-menu_data:data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data',
    'router_path' => 'data',
    'link_title' => 'Data',
    'options' => array(
      'identifier' => 'main-menu_data:data',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-apps_apps:apps.
  $menu_links['menu-apps_apps:apps'] = array(
    'menu_name' => 'menu-apps',
    'link_path' => 'apps',
    'router_path' => 'apps',
    'link_title' => 'Apps',
    'options' => array(
      'identifier' => 'menu-apps_apps:apps',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-interact_faq:kkk.
  $menu_links['menu-interact_faq:kkk'] = array(
    'menu_name' => 'menu-interact',
    'link_path' => 'kkk',
    'router_path' => 'kkk',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-interact_faq:kkk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-interact_forums:forum.
  $menu_links['menu-interact_forums:forum'] = array(
    'menu_name' => 'menu-interact',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-interact_forums:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-interact_green-paper-on-open-data:roheline-raamat.
  $menu_links['menu-interact_green-paper-on-open-data:roheline-raamat'] = array(
    'menu_name' => 'menu-interact',
    'link_path' => 'roheline-raamat',
    'router_path' => 'roheline-raamat',
    'link_title' => 'Green Paper on Open Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-interact_green-paper-on-open-data:roheline-raamat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-interact_guidelines:juhendid.
  $menu_links['menu-interact_guidelines:juhendid'] = array(
    'menu_name' => 'menu-interact',
    'link_path' => 'juhendid',
    'router_path' => 'juhendid',
    'link_title' => 'Guidelines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-interact_guidelines:juhendid',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apps');
  t('Data');
  t('FAQ');
  t('Forums');
  t('Green Paper on Open Data');
  t('Guidelines');

  return $menu_links;
}
