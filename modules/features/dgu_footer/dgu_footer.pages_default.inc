<?php
/**
 * @file
 * dgu_footer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dgu_footer_default_page_manager_pages() {
  /*
   * The "Terms and conditions" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kasutustingimused';
  $page->task = 'page';
  $page->admin_title = 'Kasutustingimused';
  $page->admin_description = '';
  $page->path = 'kasutustingimused';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => t('Terms of use'),
    'name' => 'menu-footer',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kasutustingimused_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'kasutustingimused';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'terms-and-conditions',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => t('<p><strong>Terms of use</strong></p>
<p> By definition, open data must published under a licence which permits its free and unlimited use, processing and distribution. Under the licence, it must be possible to distribute the data at the discretion of the user either without charge or for a fee. For example, <a href="http://et.wikipedia.org/wiki/Creative_Commons" rel="nofollow">Creative Commons</a> licences are regularly used by open data publishers.</p>
<p>The datasets published on this portal can be, as a rule, re-used under the licence that is named in the records of a particular dataset. Where no particular licence is indicated, the portal\'s default licence is Creative Commons BY <a href="http://creativecommons.org/licenses/by/4.0/deed.en" rel="nofollow">4.0</a>. The records (meta-data) of all datasets registered on the portal are published under the same license.</p>
<p><strong>Principles of data publication</strong></p>
<p>This portal works on the premise that all datasets and dataset records published here can be used freely, redistributed and re-used, serving the goals of opening up data, which are listed on the home page. This, by default, is also required by the Creative Commons BY licence named above. The ideas and questions posted on the forum, and the applications accessed on the <a href="/en/apps" rel="nofollow">Apps</a> page belong to their publishers and are not subject to any licencing, unless indicated otherwise.</p>
<p>&nbsp;</p>'),
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kasutustingimused'] = $page;

  /*
   * The "Contact" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kontaktid';
  $page->task = 'page';
  $page->admin_title = 'Kontaktid';
  $page->admin_description = '';
  $page->path = 'kontaktid';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact',
    'name' => 'menu-footer',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kontaktid_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'kontaktid';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'moderation-policy',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => t('<p><strong>Contact</strong></p>
<p>Questions concerning registration or uploading of open data should be sent to: <a href="mailto:opendatasupport@mkm.ee">opendatasupport@mkm.ee</a>.<br />Questions concerning the use of uploaded or registered open data should be sent to: <a href="mailto:opendatahelp@mkm.ee">opendatahelp@mkm.ee</a>.</p>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kontaktid'] = $page;

  /*
   * The "Abi" page.
   */
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'abi';
  $page->task = 'page';
  $page->admin_title = 'Abi';
  $page->admin_description = '';
  $page->path = 'abi';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Help',
    'name' => 'menu-footer',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_abi_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'abi';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = t('Help');
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Abi',
      'title' => '',
      'body' => t('<p><strong>Help information</strong></p>
<p>Further information on publishing data on the portal and on the topic of open data in general can be found on the pages accessible from the menu MORE INFO.</p>
<p>Should you be unable to find answers to your questions from these pages, please send your information request to either of the following e-mail addresses:</p>
<p>Questions concerning registration or uploading of open data: <a href="mailto:opendatasupport@mkm.ee">opendatasupport@mkm.ee</a>.<br />Questions concerning the use of uploaded or registered open data: <a href="mailto:opendatahelp@mkm.ee">opendatahelp@mkm.ee</a>.</p>'),
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['abi'] = $page;

  return $pages;

}
