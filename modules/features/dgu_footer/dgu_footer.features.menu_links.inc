<?php
/**
 * @file
 * dgu_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dgu_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_about:about.
  $menu_links['menu-footer_about:about'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_about:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_contact:kontaktid.
  $menu_links['menu-footer_contact:kontaktid'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'kontaktid',
    'router_path' => 'kontaktid',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_contact:kontaktid',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_help:abi.
  $menu_links['menu-footer_help:abi'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'abi',
    'router_path' => 'abi',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_help:abi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_terms-of-use:kasutustingimused.
  $menu_links['menu-footer_terms-of-use:kasutustingimused'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'kasutustingimused',
    'router_path' => 'kasutustingimused',
    'link_title' => 'Terms of use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_terms-of-use:kasutustingimused',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Help');
  t('Terms of use');

  return $menu_links;
}
